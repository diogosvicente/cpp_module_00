/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 14:12:31 by dioda-si          #+#    #+#             */
/*   Updated: 2023/05/06 14:15:25 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 0;
	std::cout << RED << \
		"-----------------------------------" << std::endl;
	std::cout << "---\tOpening Phonebook!\t---" << std::endl;
	std::cout << "-----------------------------------" << \
		RESET << std::endl;
	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << RED << \
		"-----------------------------------" << std::endl;
	std::cout << "---\tClosing Phonebook!\t---" << std::endl;
	std::cout << "-----------------------------------" << \
		RESET << std::endl;
	return;
}

std::string	Phonebook::requiredField(std::string label)
{
	std::string input;
	while(!std::cin.eof() && input.empty())
	{
		std::cout << label;
		std::getline(std::cin, input);
		if (!input.empty())
			break;
	}
	return(input);
}

void	Phonebook::add(void)
{
	std::string	firstName;
	std::string	lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string	darkestSecret;
	int			flag = 0;

	if (this->_index == 2)
	{
		this->_index = 0;
		flag = 1;
	}
	if (flag)
		std::cout << RED << std::endl << "The phonebook is full!" << RESET << std::endl;

	std::cout << std::endl << "Adding contact: " << _index+1 << std::endl;

	if (flag)
		std::cout << RED << "You'll overwrite the actual contact " << this->_index+1 << \
			": " << ULINE << this->_phonebook[this->_index].getFirstName() << " " << \
			this->_phonebook[this->_index].getLastName() << RESET << std::endl;
	firstName = Phonebook::requiredField("First Name: ");
	lastName = Phonebook::requiredField("Last Name: ");
	nickname = Phonebook::requiredField("Nickname: ");
	phoneNumber = Phonebook::requiredField("Phone Numer: ");
	darkestSecret = Phonebook::requiredField("Darkest Secret: ");
	if (!darkestSecret.empty())
		saveContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
}

void	Phonebook::saveContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
	this->_phonebook[this->_index].setFirstName(firstName);
	this->_phonebook[this->_index].setLastName(lastName);
	this->_phonebook[this->_index].setNickname(nickname);
	this->_phonebook[this->_index].setPhoneNumber(phoneNumber);
	this->_phonebook[this->_index].setDarkestSecret(darkestSecret);

	std::cout << GREEN << "[" << this->_index+1 << "] " <<  ULINE <<
		this->_phonebook[this->_index].getFirstName() << " " << \
		this->_phonebook[this->_index].getLastName() << RESET << \
		GREEN << " successfully added to the Phonebook!" << RESET << std::endl;
	this->_index++;
}

void	Phonebook::search()
{
	if (this->_phonebook[0].getFirstName().empty())
	{
		std::cout << RED << "The phonetbook is empty!" << RESET << std::endl;
		return;
	}
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->_phonebook[i].getFirstName().empty())
			break;
		std::cout << "|         " << i << "|";
		align(this->_phonebook[i].getFirstName());
		std::cout << "|";
		align(this->_phonebook[i].getLastName());
		std::cout << "|";
		align(this->_phonebook[i].getNickname());
		std::cout << "|";
		std::cout << std::endl;
	}
}

void	align(std::string content)
{
	int	size;
	int	i;

	size = content.length();
	i = 0;
	if (size > 10)
		std::cout << content.substr(0,9) << ".";
	else if (size == 10)
		std::cout << content;
	else
		std::cout << std::setw(10) << content;
}

void	Phonebook::details(int id)
{
	std::cout << std::endl << ULINE << "Contact details:" << RESET << std::endl;
	std::cout << "First Name: " << this->_phonebook[id].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->_phonebook[id].getLastName() << std::endl;
	std::cout << "Nickname: " << this->_phonebook[id].getNickname() << std::endl;
	std::cout << "Phone Number: " << this->_phonebook[id].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->_phonebook[id].getDarkestSecret() << std::endl;
}

