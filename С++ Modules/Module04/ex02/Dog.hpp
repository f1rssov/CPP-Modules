/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:42:17 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 13:54:36 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
public:
	Dog();
	Dog(Dog const &src);
	Dog &operator=(Dog const &rhs);
	~Dog();

	std::string	getType() const;
	void	makeSound() const;
private:
	Brain *_brain;
};
