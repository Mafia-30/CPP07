/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 01:21:59 by ymafaman          #+#    #+#             */
/*   Updated: 2024/09/19 10:02:56 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    public:
        Array();
        Array( unsigned int size );
        Array( const Array& ref );

        ~Array();

        Array&  operator=( const Array& rhs );
        T&   operator[]( unsigned int index );
        unsigned int  size( void );

    private:
        T*      array;
        unsigned int  arr_size;
};

#include "Array_inl.hpp"

#endif