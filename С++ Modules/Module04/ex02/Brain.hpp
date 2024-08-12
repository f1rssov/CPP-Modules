/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:53:37 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/27 13:53:39 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain
{
public:
	Brain();
	Brain(Brain const &src);
	Brain &operator=(Brain const &rhs);
	~Brain();
private:
	std::string ideas[100];
};