/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:39:46 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/05 14:02:08 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form();
	Form(std::string name, int signGrade, int execGrade);
	Form(Form const &src);
	Form &operator=(Form const &rhs);
	~Form();

	
	std::string const getName() const;
	bool	getSign() const;
	int		getSignGrade() const;
	int		getExecGrade() const;

	void	beSigned(Bureaucrat const &obj);

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
	bool _sign;
	int	const _signGrade;
	int	const _execGrade;

	int	checkValue(int n) const;
};

std::ostream &operator<<(std::ostream &o, Form const &obj);
