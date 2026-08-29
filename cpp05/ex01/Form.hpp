/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 14:51:40 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/08/15 16:12:50 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>

# define RESET		"\033[m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"

class Bureaucrat;

class Form
{
    private:
        static int const	_max_grade = 1;
        static int const	_min_grade = 150;
        std::string const	_name;
        bool				_signed;
        int const			_grade_to_sign;
        int const			_grade_to_execute;

    public:
        Form(void);
        Form(std::string name, int grade_to_sign, int grade_to_execute);
        Form(const Form &source);
        ~Form(void);

        Form	&operator=(const Form &other);

        std::string	getName(void) const;
        bool		getSigned(void) const;
        int			getGradeToSign(void) const;
        int			getGradeToExecute(void) const;
        void		beSigned(const Bureaucrat &bureaucrat);	

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream	&operator<<(std::ostream &os, const Form &form);

#endif
