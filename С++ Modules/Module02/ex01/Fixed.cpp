/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:23:08 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/22 16:57:59 by dcompreh         ###   ########.fr       */
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

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_i = value << this->_d;
}

Fixed:: Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	this->_i = int(roundf(value * (1 << this->_d)));
}

int Fixed::getRawBits() const
{
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

float Fixed::toFloat() const
{
	return ((float)((float)this->_i / (float)(1 << this->_d)));
}

int Fixed::toInt( void ) const
{
	return (this->_i / (1 << this->_d));
}

std::ostream &operator<<(std::ostream &o, const Fixed &obj)
{
	o << obj.toFloat();
	return o;	
}