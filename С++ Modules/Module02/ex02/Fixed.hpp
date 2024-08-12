/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:23:05 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/22 17:41:45 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &src);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	Fixed &operator=(const Fixed &src);
	Fixed &operator+(Fixed const &rhs);
	Fixed &operator-(Fixed const &rhs);
	Fixed &operator*(Fixed const &rhs);
	Fixed &operator/(Fixed const &rhs);
	Fixed &operator--();
	Fixed &operator++();
	Fixed operator++(int val);
	Fixed operator--(int val);
	
	bool operator<(Fixed const &obj);
	bool operator>(Fixed const &obj);
	bool operator>=(Fixed const &obj);
	bool operator<=(Fixed const &obj);
	bool operator==(Fixed const &obj);
	bool operator!=(Fixed const &obj);

	static Fixed &min(Fixed &o1, Fixed &o2);
	static Fixed &max(Fixed &o1, Fixed &o2);
	static Fixed const &min(Fixed const &o1, Fixed const &o2);
	static Fixed const &max(Fixed const &o1, Fixed const &o2);

	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt( void ) const;
private:
	int _i;
	static int const _d = 8;
};

std::ostream &operator<<(std::ostream &o, const Fixed &obj);