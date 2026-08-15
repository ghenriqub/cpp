/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 16:49:41 by ghenriqu          #+#    #+#             */
/*   Updated: 2026/08/15 16:50:31 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void) {
   std::cout << std::endl << YELLOW << "------ RobotomyCreationForm : #1 ------" << RESET << std::endl;
    try {
        Intern someRandomIntern;
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf << std::endl;
        delete rrf;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl << YELLOW << "------ PresidentialPardonForm : #2 ------" << RESET << std::endl;
    try {
        Intern someRandomIntern;
        AForm* ppf;
        ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
        std::cout << *ppf << std::endl;
        delete ppf;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl << YELLOW << "------ ShrubberyCreationForm : #3 ------" << RESET << std::endl;
    try {
        Intern someRandomIntern;
        AForm* scf;
        scf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        std::cout << *scf << std::endl;
        delete scf;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl << YELLOW << "------ AnyForm : Error ------" << RESET << std::endl;
    try {
        Intern someRandomIntern;
        AForm* scf;
        scf = someRandomIntern.makeForm("any form", "Bender");
        std::cout << *scf << std::endl;
        delete scf;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
