/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 15:11:04 by dioda-si          #+#    #+#             */
/*   Updated: 2023/04/29 15:11:08 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_toUpper(char *s)
{
	int	i;

	i = 0;
	while(s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		std::cout << s[i];
	i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if(argc == 1)
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (i < argc)
			ft_toUpper(argv[i++]);
		std::cout << std::endl;
	}
	return (0);
}
