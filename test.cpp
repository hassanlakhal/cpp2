/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:56:14 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/17 16:47:47 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

int main()
{


char c = 'A';       // 1 byte
int *p = (int*)&c;

//*p = 5;
std::cout << int(c) << std::endl;
std::cout << p[0] << std::endl;
    // float b;
    // b = 1.30f;
    // int *ptr;
    
    // std::cout << rus << std::endl;
    // if (rus == 0.3f)
    // {
    //     std::cout << "size :" << sizeof(float) << std::endl;
    //     /* code */
    // }
    
    // ptr = &b;
    // {
    //     std::cout << *ptr << std::endl;  
    //     /* 00111111101001100110011001100110 */
    //     /* 00111111101001100110011001100110 */
    // }
    
}
/*

floating point exmpale : 42.41

parte int: 42 ===> çç
parte fract 0.41 ====>01101000

| 1 bit |         24 bit        |         8 bit           |
--------+-----------------------+-------------------------+
| sing  |        intger         |         fract           |
--------+-----------------------+-------------------------+
|   0    |         101010       |       01101000          |
-----------------------------------------------------------

*/