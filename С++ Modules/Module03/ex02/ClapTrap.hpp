/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 17:50:04 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/22 19:00:47 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
 
# include <string>
# include <iostream> 

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string str);
	ClapTrap(ClapTrap const &src); // Copy constructor
	ClapTrap &operator=(ClapTrap const &rhs); // Affectation operator
	~ClapTrap();

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string getName(int damage);
	std::string getName();
	int	getDamage();
	int	getHitPoints();
	int	getEnergyPoints();

	void	setDamage(int damage);
protected:
	std::string _name;
	int	_hitPoints;
	int _energyPoints;
	int	_attackDamage;
};