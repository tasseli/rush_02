/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 17:21:29 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 15:13:15 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include "ft_read.h"

void	testprint(char *masterstr, int x)
{
	int i;

	i = 0;
	ft_putchar('\n');
	while (*(masterstr + i))
	{
		ft_putchar(*(masterstr + i));
		++i;
		if (i % x == 0)
			ft_putchar('\n');
	}
}

int	main(int argc, char **argv)
{
	int x;
	int y;

	x = 4;
	y = 6;
	compare(ft_read(x, y), x, y);
	return (0);
}
