/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:16:15 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/01/11 18:44:19 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie {
	private:
		std::string	name;
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string newName);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
	