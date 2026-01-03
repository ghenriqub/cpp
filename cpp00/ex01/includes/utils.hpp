/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:33:25 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/01/03 20:15:09 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_HPP
# define UTILS_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <cctype>

bool		all_digits(const std::string &str);
void		handle_whitespaces(std::string &command);
std::string	truncate(const std::string &str);

#endif