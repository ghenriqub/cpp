/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 18:30:34 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/01/03 18:34:56 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class	PhoneBook
{
	private:
		Contact	contacts[9];
	public:
		PhoneBook();
		~PhoneBook();
		int			check_pb(PhoneBook pb);
		PhoneBook	del_one(PhoneBook pb);
		void		display(PhoneBook pb);
		PhoneBook	add_i(PhoneBook pb, int i);
};

#endif