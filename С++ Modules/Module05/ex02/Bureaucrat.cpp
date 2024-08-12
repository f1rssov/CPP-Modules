/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:21:28 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/05 14:24:53 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150)
{
	std::cout << "Bureaucrat: Default constructor has been called and grade has been set to 150\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1) 
		throw GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name)
{
	*this = src;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		this->_grade = rhs._grade;
	return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &obj)
{
	o << obj.getName() << "'s grade value is " << obj.getGrade() << std::endl;
	return o;
}

Bureaucrat::~Bureaucrat() {}



void	Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	this->_grade += 1;
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	this->_grade -= 1;
}



std::string const Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::signForm(Form &obj) const
{
	try
	{
		obj.beSigned(*this);
		std::cout << this->_name << " signed " << obj.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " couldn't sign " << obj.getName() << " because grade value is too low or the Form is already signed" << std::endl;
	}
}
void	Bureaucrat::executeForm(Form const &form)
{
	try
	{
		form.execute(*this);
		std::cout << "Form " << form.getName() << " has been executed by " << this->getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << "\n";
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is to HIGH! Value range: [1, 150]";
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is to LOW! Value range: [1, 150]";
}