/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:28:29 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/08 19:08:50 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0) {}

Span::Span(unsigned int n) : _size(n) {}

Span::Span(Span const &src) : _size(src._size)
{
	if (src.getCurrSize())	
	{
		unsigned int size = src.getCurrSize();
		for (unsigned int i = 0; i < size; i++)	
			this->_array.push_back(src._array[i]);	
	}
}

Span &Span::operator=(Span const &rhs)
{
	if (this != &rhs)
		if (this->_size == rhs._size)
			this->_array = rhs._array;
	return *this;
}

void	Span::addNumber(int nb)
{
	if (this->_array.size() + 1 > this->_size)
		throw TooMuchNumbers();
	this->_array.push_back(nb);
}

void	Span::addNumberRange(std::vector<int>::iterator b, std::vector<int>::iterator e)
{
	unsigned int size = std::distance(b, e);
	if (this->getMaxSize() - this->_array.size() < size)
		throw ArrayTooSmall();
	for (std::vector<int>::iterator it = b; it != e; it++)
		this->addNumber(*it);
}

int	Span::getCurrSize() const
{
	return this->_array.size();
}

int	Span::getMaxSize() const
{
	return this->_size;
}

std::ostream &operator<<(std::ostream &o, Span const &obj)
{
	o << "Current array size is " << obj.getCurrSize();
	std::cout << " and max size is " << obj.getMaxSize() << std::endl;
	return o;
}

int Span::longestSpan()
{
	if (this->_array.size() < 2)
		throw NotEnoughNumbers();
	return *std::max_element(this->_array.begin(), this->_array.end()) 
        - *std::min_element(this->_array.begin(), this->_array.end());
}

int Span::shortestSpan()
{
	unsigned int size = this->_array.size();
	if (size < 2)
		throw NotEnoughNumbers();
	std::vector<int> cpy; 
    for (unsigned int i = 0; i < size; i++) 
        cpy.push_back(this->_array[i]); 
	std::sort(cpy.begin(), cpy.end());
	int shortest_span = abs(this->_array[1] - this->_array[0]);
	for (unsigned int i = 2; i < size; i++)
		shortest_span = std::min(shortest_span, abs(this->_array[i] - this->_array[i - 1]));
	return shortest_span;
}

Span::~Span() {}

void	Span::printArray()
{
	for (std::vector<int>::iterator it = this->_array.begin(); it != this->_array.end(); it++)
		std::cout << static_cast<int>(*it) << "\n";
}

const char* Span::TooMuchNumbers::what() const throw()
{
	return "Warning: integer array is full!";
}

const char* Span::NotEnoughNumbers::what() const throw()
{
	return "Warning: there should be at least 2 numbers to find shortest/longest span!";
}

const char* Span::ArrayTooSmall::what() const throw()
{
	return "Warning: current array is smaller than iterators range!";
}