/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:19:58 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 17:42:13 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << ": Destruction" << std::endl;
}

Zombie::Zombie(){}