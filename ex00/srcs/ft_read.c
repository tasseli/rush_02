/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:43 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 16:40:14 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read.h"

void	*ft_read(int x, int y)
{
	int			fd;
	void		*buf;
	char		first_line[1 + BUFFER_SIZE];

	buf = (void *)malloc((1 + BUFFER_SIZE) * sizeof(char));
	read(0, buf, BUFFER_SIZE);
	write(1, buf, BUFFER_SIZE);
	if (((char *)buf)[0] > 0)
		return (buf);
	return (NULL);
}

int		find_matches(void *buf, int x, int y)
{
	t_rush_info	*knowns[5] = {ft_rush_collector00(x, y),
		ft_rush_collector01(x, y),
		ft_rush_collector02(x, y), ft_rush_collector03(x, y),
		ft_rush_collector04(x, y)};
	t_rush_info	*rush00;
	int i;
	int found;

	rush00 = ft_rush_collector00(x, y);
	i = 0;
	found = 0;
	while (i < 5)
	{
		if (!strcmp(buf, knowns[i]->print))
		{
			printf("They look the same! It could be %s\n", knowns[i]->name);
			found++;
		}
		else
		{
			printf("They look different. %s\n", knowns[i]->name);
		}
	++i;
	}
	return (found);
}


// file open
// read a char
// while char != '\0'
// 		FIRST LINE
// 		while char != '\n'
// 			construct string
// 			measure x
// 		compare string to known fn(x)s
// 		narrow down
// 		if (no matches left)
// 			end

//		SECOND LINE
//		while char != '\n'
//			construct string
//			measure x_2
//		if (x_2 != x_1)
/// 		compare string to known fn(x)s with y(1) || y(2) || y(3)
// 		narrow down
// 		if (no matches left)
// 			end

//		THIRD LINE
//		while char != '\n'
//			construct string
//			measure x_3
//		if (x_3 != x_1)
/// 		compare string to known fn(x)s with y(1) || y(3) || y(4)
// 		narrow down
// 		if (no matches left)
// 			end

