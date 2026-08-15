/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:46:22 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/08/15 16:48:10 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string	_target;
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &source);
        virtual ~ShrubberyCreationForm(void);

        ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &source);

        std::string getTarget(void) const;
        void		execute(Bureaucrat const &executor) const;

        class FileNotOpenException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

#endif
