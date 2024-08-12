/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:23:05 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/22 16:55:11 by dcompreh         ###   ########.fr       */
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
	
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt( void ) const;
private:
	int _i;
	static int const _d = 8;
};

std::ostream &operator<<(std::ostream &o, const Fixed &obj);