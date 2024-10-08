/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:39:43 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/05 14:06:30 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Unknown"), _sign(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form: Default constructor has been called and grades have been set to 150\n";
}
Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _sign(false), _signGrade(checkValue(signGrade)) , _execGrade(checkValue(execGrade)) {}

Form::Form(Form const &src) : _name(src._name), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	*this = src;
}

Form	&Form::operator=(Form const &rhs)
{
	if (this != &rhs)
		this->_sign = rhs._sign;
	return *this;
}

std::ostream &operator<<(std::ostream &o, Form const &obj)
{
	o << obj.getName() << " form is ";
	if (obj.getSign())
		std::cout << "signed";
	else
		std::cout << "unsigned";
	std::cout << " with sign grade "<< obj.getSignGrade();
	std::cout << " and execution grade " << obj.getExecGrade() << std::endl;
	return o;
}

Form::~Form() {}



std::string const Form::getName() const
{
	return this->_name;
}

bool Form::getSign() const
{
	return this->_sign;
}

int	Form::getSignGrade() const
{
	return this->_signGrade;
}

int Form::getExecGrade() const
{
	return this->_execGrade;
}

int Form::checkValue(int n) const
{
	if (n < 1)	
		throw GradeTooHighException();
	if (n > 150)
		throw GradeTooLowException();
	return n;
}

void	Form::beSigned(Bureaucrat const &obj)
{
	if (obj.getGrade() <= this->_signGrade)
		this->_sign = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is to HIGH! Value range: [1, 150]";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is to LOW! Value range: [1, 150]";
}
