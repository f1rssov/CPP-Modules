/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:21:33 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/06 15:12:34 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern mel;
	{
	// Tests wrong name
	Form *bocal = mel.makeForm("fake", "bocal");
	
	bocal = mel.makeForm("presidential pardon", "bocal");
	std::cout << *bocal;
	delete bocal;
	}	
	{
	Form *bocal = mel.makeForm("robotomy request", "bocal");
	std::cout << *bocal;
	Bureaucrat tac("Tac", 1);
	tac.signForm(*bocal);
	tac.executeForm(*bocal);
	delete bocal;
	}
}
