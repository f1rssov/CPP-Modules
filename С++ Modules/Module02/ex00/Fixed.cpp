/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:23:08 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/22 16:05:48 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _i(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_i;
}

void Fixed::setRawBits(int const raw)
{
	this->_i = raw;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &src)
		this->_i = src.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}