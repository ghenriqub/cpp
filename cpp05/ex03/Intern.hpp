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

# define RESET		"\033[m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"

class Intern
{
    private:
        enum FormType
        {
            ROBOTOMY_REQUEST,
            PRESIDENTIAL_PARDON,
            SHRUBBERY_CREATION
        };

        std::string   _form_types[3];
    public:
        Intern(void);
        Intern(const Intern &source);
        ~Intern(void);

        Intern  &operator=(const Intern &source);

        AForm*  makeForm(std::string name, std::string target);

        class FormNotFoundException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#endif
