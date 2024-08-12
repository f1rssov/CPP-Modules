/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:00:19 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/06 15:11:51 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Form.hpp"

class Intern
{
public:
	Intern();
	Intern(Intern const &src);
	Intern &operator=(Intern const &rhs);
	~Intern();
	
	Form *makeForm(std::string name, std::string const target);
};
