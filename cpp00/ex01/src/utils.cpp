/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 19:41:35 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/01/03 20:14:55 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

bool	all_digits(const std::string &str)
{
	if (str.empty())
		return (false);
	for (std::string::size_type i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(static_cast<unsigned char>(str[i])))
			return (false);
	}
	return (true);
}

void	handle_whitespaces(std::string &command)
{
	std::stringstream	clean_command;
	bool				between_words;

	for (std::size_t i = 0; i < command.length(); i++)
	{
		char	c = command[i];
		if (std::isspace(static_cast<unsigned char>(c)))
			between_words = true;
		else
		{
			if (between_words)
			{
				clean_command << ' ';
				between_words = false;
			}
			clean_command << c;
		}
	}
	command = clean_command.str();
	if (command[0] == ' ')
		command.erase(0, 1);
	if (command[command.length() - 1] == ' ')
		command.erase(command.length() - 1, 1);
}

std::string	truncate(const std::string &str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}
