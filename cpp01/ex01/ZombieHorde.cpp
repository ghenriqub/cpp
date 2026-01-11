/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 18:54:56 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/01/11 19:06:14 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	if (N < 1) {
		std::cout << "A Horde has at least 1 Zombie." << std::endl;
		return NULL;
	}
	Zombie	*horde = new Zombie[N];
	if (horde == NULL) {
		std::cout << "Allocation of the horde failed." << std::endl;
		return NULL;
	}
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return horde;
}
