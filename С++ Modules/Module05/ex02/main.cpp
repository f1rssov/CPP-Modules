/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:21:33 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/05 14:26:22 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	ShrubberyCreationForm fourty_two("42", "garden");
	Bureaucrat tac("Tac", 138);
	tac.signForm(fourty_two);
	tac.executeForm(fourty_two);
	tac.incrementGrade();
	tac.executeForm(fourty_two);

	std::cout << std::endl;
	ShrubberyCreationForm fourty_one("41", "bocal");
	Bureaucrat yoshi("Yoshi", 144);
	yoshi.signForm(fourty_two);
	yoshi.executeForm(fourty_two);
	
	std::cout << std::endl;
	RobotomyRequestForm fourty_three("43", "clusters");
	Bureaucrat palmi("Palmi", 42);
	palmi.signForm(fourty_three);
	palmi.incrementGrade();
	palmi.signForm(fourty_three);
	palmi.executeForm(fourty_three);

	std::cout << std::endl;
	PresidentialPardonForm fourty_four("44", "cafet");
	Bureaucrat mel("Mel", 5);
	mel.signForm(fourty_four);
	mel.executeForm(fourty_four);
}

