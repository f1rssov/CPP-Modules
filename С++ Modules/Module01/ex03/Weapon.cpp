/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:34:50 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 19:22:07 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    setType(type);
}

std::string& Weapon::getType()
{
    std::string &res = type;
    return res;
}

void	Weapon::setType(std::string type)
{
    this->type = type;
}