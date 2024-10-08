/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcompreh <dcompreh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:56:40 by dcompreh          #+#    #+#             */
/*   Updated: 2022/11/08 20:02:46 by dcompreh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> mstack;
    std::stack<int> ha;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    // std::list<int> mstack;

    // mstack.push_back(5);
    // mstack.push_back(17);

    // std::cout << mstack.back() << std::endl;

    // mstack.pop_back();

    // std::cout << mstack.size() << std::endl;

    // mstack.push_back(3);
    // mstack.push_back(5);
    // mstack.push_back(737);
    // //[...]
    // mstack.push_back(0);

    // std::list<int>::iterator it = mstack.begin();
    // std::list<int>::iterator ite = mstack.end();
    
    // ++it;
    // --it;
    // while (it != ite)
    // {
    //     std::cout << *it << std::endl;
    //     ++it;
    // }
    return 0;
}
