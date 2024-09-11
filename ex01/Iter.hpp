/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 23:11:42 by ymafaman          #+#    #+#             */
/*   Updated: 2024/09/10 23:26:31 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ITER_HPP
# define ITER_HPP

template <typename T>
void    iter(T* array, size_t size, void (*f)(T))
{
    for (size_t i = 0; i < size; i++)
        f(array[i]);
}


// template <typename T>
// void    do_something(T arg)
// {
//     std::cout << arg << std::endl;
// }

#endif