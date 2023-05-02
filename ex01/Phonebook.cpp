/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 14:12:31 by dioda-si          #+#    #+#             */
/*   Updated: 2023/05/01 23:30:34 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
	this->_index = 1;
	std::cout << "---\tOpening Phonebook!\t---" << std::endl;
	return;
}

Phonebook::~Phonebook(void)
{
	std::cout << "---\tClosing Phonebook!\t---" << std::endl;
	return;
}

std::string	Phonebook::requiredField(std::string label)
{
	std::string input;
	while(true)
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
	std::cout << "Adding contact number: " << _index << std::endl;
	this->_phonebook[this->_index].setFirstName(Phonebook::requiredField("First Name: "));
	this->_phonebook[this->_index].setLastName(Phonebook::requiredField("Last Name: "));
}
