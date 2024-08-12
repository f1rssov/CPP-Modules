/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:56:26 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/08 20:07:51 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <stack>
#include <vector>
#include <list>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack();
	MutantStack(MutantStack<T, Container> const &src);
	MutantStack<T, Container> &operator=(MutantStack<T, Container> const &rhs);
	~MutantStack();
	
	typedef typename Container::iterator iterator;
	typedef typename Container::reverse_iterator reverse_iterator;
	typedef typename Container::const_iterator const_iterator;
	typedef typename Container::const_reverse_iterator const_reverse_iterator;

	iterator begin() {return this->c.begin();};
	reverse_iterator rbegin() {return this->c.rbegin();};
	const_iterator cbegin() {return this->c.cbegin();};
	const_reverse_iterator crbegin() {return this->c.crbegin();};
	iterator end() {return this->c.end();};
	reverse_iterator rend() {return this->c.rend();};
	const_iterator cend() {return this->c.cend();};
	const_reverse_iterator crend() {return this->c.crend();};
};

#include "MutantStack.tpp"
