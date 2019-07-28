/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 17:21:29 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 16:46:34 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include "ft_read.h"

#include <stdlib.h>

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

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	if (!find_matches(ft_read(x, y), x, y))
		ft_putstr("No matches found :(");
	return (0);
}
