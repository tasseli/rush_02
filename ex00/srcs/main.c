/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 17:21:29 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 17:13:33 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include "ft_read.h"

#include <stdlib.h>

int	main(int argc, char **argv)
{
	int		x;
	int		y;
	void	*buf;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
//	buf = ft_read()
	if (!find_matches(ft_read(x, y), x, y))
		ft_putstr("No matches found :(");
	return (0);
}
