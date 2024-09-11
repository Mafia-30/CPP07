/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Max.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:59:31 by ymafaman          #+#    #+#             */
/*   Updated: 2024/09/10 23:00:41 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_HPP
# define MAX_HPP

template <typename T>
T   max(T arg1, T arg2)
{
    if (arg1 > arg2)
        return arg1;
    return arg2;
}

#endif