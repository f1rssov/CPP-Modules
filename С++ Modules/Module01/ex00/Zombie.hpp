/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 16:17:42 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/18 16:54:59 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>


class Zombie
{
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();
	void announce(void);
private:
	std::string name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );