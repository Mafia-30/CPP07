/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Min.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymafaman <ymafaman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 22:57:07 by ymafaman          #+#    #+#             */
/*   Updated: 2024/09/10 22:58:41 by ymafaman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_HPP
# define MIN_HPP

template <typename T>
T   min(T arg1, T arg2)
{
    if (arg1 < arg2)
        return arg1;
    return arg2;
}

#endif