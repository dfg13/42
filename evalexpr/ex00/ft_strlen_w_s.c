/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_w_s.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrow <marrow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 21:18:52 by marrow            #+#    #+#             */
/*   Updated: 2019/08/18 05:54:35 by marrow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen_w_s(char *str)
{
	int i;

	i = 0;
	while (*str++)
		if (*str != ' ')
			i++;
	return (i);
}
