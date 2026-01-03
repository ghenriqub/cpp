/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 18:21:52 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/01/03 18:29:48 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	Phone;
		std::string	Secret;
	public:
		Contact();
		~Contact();

		Contact(std::string FirstName, std::string LastName, \
			std::string NickName, std::string Phone, std::string Secret);
		
		Contact	add(Contact contact);
		int		isnull(Contact contact);
		void	display_complete(Contact contact);
		void	print_info(Contact contact, int i);
};

#endif