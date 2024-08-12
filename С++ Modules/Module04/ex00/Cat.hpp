/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:41:59 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 13:42:01 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
public:
	Cat();
	Cat(Cat const &src);
	Cat &operator=(Cat const &rhs);
	~Cat();

	std::string	getType() const;
	void	makeSound() const;
};