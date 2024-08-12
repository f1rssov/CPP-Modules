/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:44:11 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 13:44:12 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat const &src);
	WrongCat &operator=(WrongCat const &rhs);
	~WrongCat();

	std::string	getType() const;
	void	makeSound() const;
};
