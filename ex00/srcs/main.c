/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 17:21:29 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/27 18:05:42 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include "ft_read.h"

int	main(void)
{
	int			length = 1;
	char		*first_line0;
	t_rush_info	*myinfo0;
	t_rush_info	*myinfo1;
	t_rush_info	*myinfo2;
	t_rush_info	*myinfo3;
	t_rush_info	*myinfo4;

//	ft_putchar('0' + ft_read());
	myinfo0 = ft_rush_collector00(length, 4);
	printf("%s %s\n", myinfo0->name, myinfo0->print);
	free (myinfo0->print);
	free (myinfo0);
	myinfo1 = ft_rush_collector01(length, 4);
	printf("%s %s\n", myinfo1->name, myinfo1->print);
	free (myinfo1->print);
	free (myinfo1);
	myinfo2 = ft_rush_collector02(length, 4);
	printf("%s %s\n", myinfo2->name, myinfo2->print);
	free (myinfo2->print);
	free (myinfo2);
	myinfo3 = ft_rush_collector03(length, 4);
	printf("%s %s\n", myinfo3->name, myinfo3->print);
	free (myinfo3->print);
	free (myinfo3);
	myinfo4 = ft_rush_collector04(length, 4);
	printf("%s %s\n", myinfo4->name, myinfo4->print);
	free (myinfo4->print);
	free (myinfo4);
	return (0);
}
