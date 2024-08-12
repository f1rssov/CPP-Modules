/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:23:35 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 17:23:37 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string name, std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);	
	virtual ~PresidentialPardonForm();

	void	execute(Bureaucrat const &executor) const;
	void	execAction() const;
	
	void	beSigned(Bureaucrat const &obj);
private:
	std::string const _target;
};
