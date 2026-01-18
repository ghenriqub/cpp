/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:14:19 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/01/18 14:46:16 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType) : _type(newType) {}

Weapon::~Weapon(void) {}

const std::string&	Weapon::getType(void) {
	return (this->_type);
}

void	Weapon::setType(std::string newType) {
	this->_type = newType;
}
