/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 14:12:25 by dioda-si          #+#    #+#             */
/*   Updated: 2023/04/30 14:28:31 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}

std::string	Contact::GetFirstName(void) const
{
	return (this->_FirstName);
}

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}
