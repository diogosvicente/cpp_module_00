/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:29:44 by dioda-si          #+#    #+#             */
/*   Updated: 2023/05/01 14:15:19 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main(void)
{
	Contact a1;

	a1.setFirstName("joao");
	std::cout << "Você cadastrou o " << a1.getFirstName() << std::endl;
	return (0);
}
