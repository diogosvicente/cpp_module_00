/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:29:44 by dioda-si          #+#    #+#             */
/*   Updated: 2023/05/02 00:12:45 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	mainMenu(Phonebook p1)
{
	int op = 0;
	while (op != 3)
	{
		std::cout << "MENU" << std::endl;
		std::cout << "1 - Add" << std::endl;
		std::cout << "2 - Search" << std::endl;
		std::cout << "3 - Exit" << std::endl;
		std::cout << "Chose an option: ";
		std::cin >> op;

		switch (op)
		{
			case 1:
				p1.add();
				break;
			case 2:
				std::cout << "Search (in construction)" << std::endl;
				break;
			case 3:
				break;
			default:
				std::cout << "Invalid option!" << std::endl;
				break;
		}
	}
}

int	main(void)
{
	Phonebook p1;
	mainMenu(p1);	
	return (0);
}
