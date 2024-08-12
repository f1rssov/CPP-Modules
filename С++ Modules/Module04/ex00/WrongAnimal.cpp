/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:43:16 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 13:43:18 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
	std::cout << "WrongAnimal: constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "**WrongAnimal sound**" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return this->type;
}
