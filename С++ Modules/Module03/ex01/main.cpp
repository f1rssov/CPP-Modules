/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:50:10 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/22 19:02:46 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap Tac("Tac");
	ScavTrap Yoshi("Yoshi");
	
	std::cout << Yoshi.getName() << " has initially " << Yoshi.getHitPoints() << " hit points." << std::endl;
	
	Tac.attack(Yoshi.getName(Tac.getDamage()));
	std::cout << Yoshi.getName() << " has now " << Yoshi.getHitPoints() << " hit points." << std::endl;
	
	Yoshi.beRepaired(10);
	std::cout << Yoshi.getName() << " has now " << Yoshi.getHitPoints() << " hit points." << std::endl;
	
	std::cout << Tac.getName() << " has now " << Tac.getEnergyPoints() << " energy points because he attacked " << Yoshi.getName() << std::endl;
	std::cout << Yoshi.getName() << " has now " << Yoshi.getEnergyPoints() << " energy points because she has been repaired " << std::endl;

	Yoshi.guardGate();
}