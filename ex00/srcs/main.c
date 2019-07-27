/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 17:21:29 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/27 17:25:16 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include "ft_read.h"

int	main(void)
{
	int			length = 9;
	char		*first_line0;
	t_rush_info	*myinfo;

	myinfo = ft_rush_collector00(length, 3);
	printf("%s %s\n", myinfo->name, myinfo->print);
	free (myinfo->print);
	free (myinfo);
	return (0);
}
