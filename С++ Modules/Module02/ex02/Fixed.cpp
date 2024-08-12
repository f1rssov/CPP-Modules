/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:23:08 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/22 17:44:13 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _i(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	// std::cout << "Copxtructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_i = value << this->_d;
}

Fixed:: Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_i = int(roundf(value * (1 << this->_d)));
}

int Fixed::getRawBits() const
{
	return this->_i;
}

void Fixed::setRawBits(int const raw)
{
	this->_i = (raw <= 2147483647 && raw >= -2147483648) ? raw : 0;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if(this != &src)
		this->_i = src.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
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

Fixed &Fixed::operator+(Fixed const &rhs)
{
	if (this->_i + rhs.getRawBits() <= 2147483647)
		this->_i += rhs.getRawBits();
	return *this;	
}

Fixed &Fixed::operator-(Fixed const &rhs)
{
	if (this->_i - rhs.getRawBits() >= -2147483648)
		this->_i -= rhs.getRawBits();
	return *this;	
}

Fixed &Fixed::operator*(Fixed const &rhs)
{
	if (rhs.getRawBits() != 0)
	{
		this->_i = this->getRawBits() * rhs.getRawBits();
		this->_i = this->_i >> this->_d;
	}
	else
		this->_i = 0;
	return *this;	
}

Fixed &Fixed::operator/(Fixed const &rhs)
{
	if (rhs.getRawBits() != 0)
	{
		this->_i = this->getRawBits() / rhs.getRawBits();
		this->_i = this->_i << this->_d;
	}
	else
		this->_i = 0;
	return *this;	
}

Fixed &Fixed::operator--()
{
	if (this->_i != -2147483648)
		--this->_i;
	return *this;	
}

Fixed &Fixed::operator++()
{
	if (this->_i != 2147483647)
		++this->_i;
	return *this;	
}

Fixed Fixed::operator--(int)
{
	Fixed copy(*this);
	if (this->_i != -2147483648)
		this->_i--;
	return copy;	
}

Fixed Fixed::operator++(int)
{
	Fixed copy(*this);
	if (this->_i != 2147483647)
		this->_i++;
	return copy;	
}

bool Fixed::operator<(Fixed const &obj)
{
	return this->_i < obj._i;
}

bool Fixed::operator>(Fixed const &obj)
{
	return this->_i > obj._i;
}

bool Fixed::operator<=(Fixed const &obj)
{
	return this->_i <= obj._i;
}

bool Fixed::operator>=(Fixed const &obj)
{
	return this->_i >= obj._i;
}

bool Fixed::operator==(Fixed const &obj)
{
	return this->_i == obj._i;
}

bool Fixed::operator!=(Fixed const &obj)
{
	return this->_i != obj._i;
}

Fixed &Fixed::min(Fixed &o1, Fixed &o2)
{
	if (o1 <= o2)
		return o1;
	else
		return o2;
}

Fixed &Fixed::max(Fixed &o1, Fixed &o2)
{
	if (o1 >= o2)
		return o1;
	else
		return o2;
}

Fixed const &Fixed::min(Fixed const &o1, Fixed const &o2)
{
	if (Fixed(o1) <= Fixed(o2))
		return o1;
	else
		return o2;
}

Fixed const &Fixed::max(Fixed const &o1, Fixed const &o2)
{
	if (Fixed(o1) >= Fixed(o2))
		return o1;
	else
		return o2;
}