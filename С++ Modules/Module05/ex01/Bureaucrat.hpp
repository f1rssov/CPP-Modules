/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:21:32 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/05 14:00:25 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(Bureaucrat const &src);
	Bureaucrat &operator=(Bureaucrat const &rhs);
	
	void	signForm(Form &obj) const;

	
	std::string const getName() const;
	int getGrade() const;
	
	void	incrementGrade();
	void	decrementGrade();
	

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};	
private:
	std::string const _name;
	int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &obj);