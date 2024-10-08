/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:41:46 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 14:00:56 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat: constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(Cat const &src)
{
	std::cout << "Cat: copy constructor called" << std::endl;
	this->type = src.type;
	this->_brain = new Brain();
	*this->_brain = *src._brain;
}

Cat &Cat::operator=(Cat const &rhs)
{
	Animal::operator=(rhs);
	return *this;
}

Cat::~Cat()
{
	delete this->_brain;
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
