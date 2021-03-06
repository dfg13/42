/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrow <marrow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 04:18:32 by marrow            #+#    #+#             */
/*   Updated: 2019/08/20 04:55:22 by marrow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] && (*av[1] == ' ' || *av[1] == '\t'))
			av[1]++;
		while (*av[1] && *av[1] != ' ' && *av[1] != '\t')
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
