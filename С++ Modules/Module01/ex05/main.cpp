/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:01:20 by dcompreh          #+#    #+#             */
/*   Updated: 2022/10/22 15:07:58 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;

	harl.complain("DEBUG");
	std::cout << "----------------------------------" << std::endl;
	harl.complain("INFO");
	std::cout << "----------------------------------" << std::endl;
	harl.complain("WARNING");
	std::cout << "----------------------------------" << std::endl;
	harl.complain("ERROR");
	std::cout << "----------------------------------" << std::endl;
	harl.complain("HE");
}