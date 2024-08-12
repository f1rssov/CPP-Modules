/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:23:50 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 17:48:59 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Unknown", 25, 5), _target("default") {}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) : Form(name, 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execAction() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n";
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	execAction();
}
