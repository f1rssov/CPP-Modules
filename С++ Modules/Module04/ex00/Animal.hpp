/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:24:27 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 13:24:29 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
public:
	Animal();
	Animal(Animal const &src);
	Animal &operator=(Animal const &rhs);
	virtual ~Animal();
	
	std::string	getType() const;
	virtual void	makeSound() const;
protected:
	std::string type;
};