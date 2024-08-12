/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:32:00 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 19:41:59 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Weapon
{
public:
	Weapon(){};
	Weapon(std::string type);
	std::string &getType();
	void	setType(std::string type);
private:
	std::string type;
};

