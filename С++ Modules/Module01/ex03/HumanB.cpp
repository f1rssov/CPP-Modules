/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:40:35 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 19:55:40 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::attack()
{
	std::string str = this->weapon->getType();
	if (!str[0])
		std::cout << name << " attacks with their hand" <<std::endl;
	else
		std::cout << name << " attacks with their" << this->weapon->getType() <<std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
}