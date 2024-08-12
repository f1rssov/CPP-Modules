/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:17:42 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 17:40:14 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Zombie
{
public:
	Zombie();
	~Zombie();
	void announce(void);
	void set_name(std::string name);
private:
	std::string name;
};

Zombie *zombieHorde(int N, std::string name);