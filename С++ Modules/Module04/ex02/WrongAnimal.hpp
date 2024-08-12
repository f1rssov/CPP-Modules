/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:43:09 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 13:43:11 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &src);
	WrongAnimal &operator=(WrongAnimal const &rhs);
	virtual ~WrongAnimal();
	
	std::string	getType() const;
	void	makeSound() const;
protected:
	std::string type;
};
