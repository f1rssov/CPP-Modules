/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:01:05 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/22 19:01:07 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &src);
	ScavTrap &operator=(ScavTrap const &rhs);
	~ScavTrap();
	
	void	attack(const std::string target);
	void	guardGate();
};