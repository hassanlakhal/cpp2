/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlakhal- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 05:22:07 by hlakhal-          #+#    #+#             */
/*   Updated: 2023/10/18 15:23:22 by hlakhal-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Point.hpp"

int main()
{
    Point a(0,0);
    Point b (1,0);
    Point c (0,1);
    Point i(0.5,0.5);
    Point::dispaly(a,b,c,i);  
}