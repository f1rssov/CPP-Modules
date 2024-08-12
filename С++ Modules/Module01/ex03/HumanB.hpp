/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:36:34 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 19:48:03 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	~HumanB(){}
	void	setWeapon(Weapon &w);
	void    attack();
private:
	Weapon *weapon;
	std::string name;
};