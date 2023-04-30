/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 12:30:04 by dioda-si          #+#    #+#             */
/*   Updated: 2023/04/30 14:31:36 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# define "Contact.hpp"

class Phonebook
{
	private:
		Contact	_phonebook[8];
		int	_index;
	public:
		Phonebook(void);
		~Phonebook(void);
		void	add(void);
		void	search(char *s);
		void	exit(int option);
}

#endif
