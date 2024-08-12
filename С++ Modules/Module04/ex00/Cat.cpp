/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:41:46 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 13:41:47 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat: constructor called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat: copy constructor called" << std::endl;
	*this = src;
}

Cat &Cat::operator=(Cat const &rhs)
{
	Animal::operator=(rhs);
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat: destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miaou miaou" << std::endl;
}

std::string	Cat::getType() const
{
	return this->type;
}
