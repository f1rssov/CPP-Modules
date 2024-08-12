/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:28:30 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/08 18:55:19 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Span
{
public:
	Span();
	Span(unsigned int n);
	Span(Span const &src);
	Span &operator=(Span const &rhs);
	~Span();
	
	void	addNumber(int nb);
	void	addNumberRange(std::vector<int>::iterator b, std::vector<int>::iterator e);
	int		shortestSpan();
	int		longestSpan();


	
	int 	getCurrSize() const;
	int 	getMaxSize() const;
	void	printArray();

	class TooMuchNumbers : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class NotEnoughNumbers : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class ArrayTooSmall : public std::exception
	{
	public:
		const char *what() const throw();
	};
private: 
	std::vector<int> _array;
	unsigned int const _size;
};

std::ostream &operator<<(std::ostream &o, Span const &obj);
