/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:39:17 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/08/15 16:42:45 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("default", 1, 1), _target("default") {
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
	return ;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &source) : AForm(source), _target(source._target) {
	*this = source;
	return ;
}
PresidentialPardonForm::~PresidentialPardonForm(void) {
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &source) {
	if (this == &source)
		return (*this);
	_target = source._target;
	return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const {
	return (_target);
}
void		PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (!getSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > getGradeToExecute())
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
