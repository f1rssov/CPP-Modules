/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:19:11 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/22 15:09:56 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Harl
{
public:
	void complain(std::string level);
private:
	void debug();
	void info();
	void warning();
	void error();
};

typedef void(Harl::*HarlPtr)();
