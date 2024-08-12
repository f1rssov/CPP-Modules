/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:53:48 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 13:53:49 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "Idea " + std::to_string(i);
	std::cout << "Brain: constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	std::cout << "Brain: copy constructor called" << std::endl;
	*this = src;
}

Brain &Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain: destructor called" << std::endl;
}
