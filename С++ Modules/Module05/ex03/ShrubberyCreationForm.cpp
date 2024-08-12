/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:59:17 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/05 14:08:56 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Unknown", 145, 137), _target("default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) : Form(name, 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execAction() const
{
	std::ofstream file(this->_target + "_shrubbery");

	file << "      /\\        	   	" << "\n";
	file << "     /\\/\\     		" << "\n";
	file << "    /\\/\\/\\    		" << "\n";
	file << "   /\\/\\/\\/\\  		" << "\n";
	file << "  /\\/\\/\\/\\/\\ 		" << "\n";
	file << " /\\/\\/\\/\\/\\/\\ 	" << "\n";
	file << "/\\/\\/\\/\\/\\/\\/\\	" << "\n";
	file << "      ||      			" << "\n";
	file << "      ||      			" << "\n";
	file << "      ||     			" << "\n";

	file.close();	
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	execAction();
}
