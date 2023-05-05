/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:29:44 by dioda-si          #+#    #+#             */
/*   Updated: 2023/05/04 19:42:07 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Phonebook p1;

	std::string	input;
	while(input != "EXIT")
	{
		std::cout << std::endl << "Type an option (ADD, SEARCH or EXIT): ";
		std::getline (std::cin, input);
		if (input == "ADD")
			p1.add();
		else if (input == "SEARCH")
			p1.search();
		else if(input == "EXIT")
			return(0);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
	}
	return (0);
}
