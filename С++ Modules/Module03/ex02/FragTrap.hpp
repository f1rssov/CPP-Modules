/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 19:29:26 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/22 19:29:28 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &src);
	FragTrap &operator=(FragTrap const &rhs);
	~FragTrap();

	void	attack(const std::string target);
	void	highFivesGuys();
};