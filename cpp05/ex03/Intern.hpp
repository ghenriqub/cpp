/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:50:57 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/08/15 16:51:26 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"

# define RESET		"\e[m"
# define RED		"\e[31m"
# define GREEN		"\e[32m"
# define YELLOW		"\e[33m"

enum FormType
{
    ROBOTOMY_REQUEST,
    PRESIDENTIAL_PARDON,
    SHRUBBERY_CREATION
};

class Intern
{
    private:
        std::string   _form_types[3];
    public:
        Intern();
        ~Intern();
        AForm* makeForm(std::string name, std::string target);
        class FormNotFoundException : public std::exception {
            virtual const char* what() const throw();
        };
};

#endif
