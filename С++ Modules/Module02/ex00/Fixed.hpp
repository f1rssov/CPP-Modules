/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:23:05 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/22 16:05:12 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Fixed
{
public:
    Fixed();
    Fixed(const Fixed &src);
    ~Fixed();
    int getRawBits() const;
    void setRawBits(int const raw);
    Fixed &operator=(const Fixed &src);
private:
    int _i;
    static int const _b = 8;
};