/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Swap.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:51:30 by ymafaman          #+#    #+#             */
/*   Updated: 2024/09/10 22:54:02 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_HPP
# define SWAP_HPP

template <typename T>
void    swap(T& arg1, T& arg2)
{
    T   temp;

    temp = arg1;
    arg1 = arg2;
    arg2 = temp;
}


#endif