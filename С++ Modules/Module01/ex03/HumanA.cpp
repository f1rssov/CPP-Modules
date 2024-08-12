/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:41:25 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 19:30:35 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w) : weapon(w)
{
    this->name = name;
}

void HumanA::attack()
{
    std::cout << name << " attacks with their" << this->weapon.getType() <<std::endl;
}