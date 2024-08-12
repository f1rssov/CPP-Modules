/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:59:19 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 17:04:03 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string name, std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);	
	virtual ~ShrubberyCreationForm();

	void	execute(Bureaucrat const &executor) const;
	void	execAction() const;
	
	void	beSigned(Bureaucrat const &obj);
private:
	std::string const _target;
};
