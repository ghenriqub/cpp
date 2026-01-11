/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NewZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:33:05 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/01/11 18:12:53 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Allocates a new Zombie on the heap
Zombie*	newZombie(std::string name) {
	return (new Zombie(name));
}
