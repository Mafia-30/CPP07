/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 02:05:19 by ymafaman          #+#    #+#             */
/*   Updated: 2024/09/11 02:53:38 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
    Array<int> IntArray(5);

    for (unsigned int i = 0; i < IntArray.size(); i++)
    {
        std::cout << IntArray[i] << std::endl;
    }

    try
    {
        IntArray[0] = 99;
        std::cout << IntArray[0] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << IntArray[7] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}