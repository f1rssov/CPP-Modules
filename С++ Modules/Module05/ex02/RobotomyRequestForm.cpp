/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:59:12 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 17:23:17 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : Form("Unknown", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target) : Form(name, 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execAction() const
{
	std::cout << "** Loud drill noises **" << std::endl;
	srand((unsigned int)time(NULL));
	int random = rand() % 2;
	std::cout << this->_target;
	random ? std::cout << " has been successfully robotomized" : std::cout << " couldn't be robotomized";
	std::cout << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	execAction();
}
