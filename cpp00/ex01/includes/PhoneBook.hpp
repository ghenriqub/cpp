/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 18:30:34 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/01/03 20:17:47 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <ios>
# include <string>

# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	contacts[8];
		int		index;
		int		count;
	public:
		PhoneBook();
		~PhoneBook();
		void	init(void);
		void	message_prompt(void);
		void	message_warning(void);
		int		get_count(void) const;
		void	add(void);
		void	search(void);
		void	index_search(void);
};

#endif
