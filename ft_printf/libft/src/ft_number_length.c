/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_length.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 05:02:40 by marrow            #+#    #+#             */
/*   Updated: 2020/02/28 13:08:24 by marrow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_number_length(intmax_t number, int base)
{
	int length;

	length = 1;
    if (number == LLONG_MIN)
        return (20);
	if (number < 0)
	{
		length++;
		number *= -1;
	}
	while ((number /= base) > 0)
		length++;
	return (length);
}
