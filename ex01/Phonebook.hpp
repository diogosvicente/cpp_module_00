/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:30:04 by dioda-si          #+#    #+#             */
/*   Updated: 2023/05/06 15:46:43 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

const std::string RESET = "\033[0m";
const std::string ULINE = "\033[4m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";

class Phonebook
{
	private:
		Contact	_phonebook[8];
		int	_index;
	public:
		Phonebook(void);
		~Phonebook(void);
		std::string	requiredField(std::string label);
		void 		saveContact(std::string firstName, \
					std::string lastName, std::string nickname, \
					std::string phoneNumber, std::string darkestSecret);
		void		align(std::string content);
		int		details(int id);
		void		add(void);
		void		search(void);
};

#endif
