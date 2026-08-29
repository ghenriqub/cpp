/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 14:14:46 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/08/15 16:13:32 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// ORTHODOX CANNONICAL FORM
Bureaucrat::Bureaucrat(void) : _name("default"), _grade(_min_grade) {
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < _max_grade)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > _min_grade)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &source) : _name(source._name) {
	*this = source;
	return ;
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

// OPERATOR OVERLOAD
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &source) {
	if (this == &source)
		return (*this);
	_grade = source._grade;
	return (*this);
}

// GETTER
std::string	Bureaucrat::getName(void) const {
	return (_name);
}

int			Bureaucrat::getGrade(void) const {
	return (_grade);
}

// MEMBER FUNCTIONS
void		Bureaucrat::incrementGrade(void) {
	if (_grade - 1 < _max_grade)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void		Bureaucrat::decrementGrade(void) {
	if (_grade + 1 > _min_grade)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

// SIGN FORM
void		Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(*this);
		std::cout << GREEN << _name << RESET << " signed " << GREEN << form.getName() << RESET << "." << std::endl;
	}
	catch (std::exception &e) {
		std::cout << RED << _name << RESET << " couldn't sign " << RED << form.getName() << RESET << " because " << RED << e.what() << RESET << std::endl;
	}
}

// EXCEPTION CLASSES
const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade too low!");
}

// STREAM OPERATOR OVERLOAD
std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << YELLOW << bureaucrat.getName() << RESET << ", bureaucrat grade " << GREEN << bureaucrat.getGrade() << RESET << "." << std::endl;
	return (os);
}
