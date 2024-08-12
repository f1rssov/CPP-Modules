/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:59:15 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 17:23:05 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string name, std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);	
	virtual ~RobotomyRequestForm();

	void	execute(Bureaucrat const &executor) const;
	void	execAction() const;
	
	void	beSigned(Bureaucrat const &obj);
private:
	std::string const _target;
};
