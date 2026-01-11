/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RandomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 17:33:44 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/01/11 17:37:29 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Allocates a new Zombie on the stack, and annouces it
void	randomChump(std::string name) {
	Zombie	zombie(name);
	zombie.announce();
}
