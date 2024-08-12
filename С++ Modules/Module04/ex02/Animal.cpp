/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:23:24 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 14:17:02 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal: constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal: copy constructor called" << std::endl;
	*this = src;
}

Animal &Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal: destructor called" << std::endl;
}

std::string	Animal::getType() const
{
	return this->type;
}
