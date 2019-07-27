/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:43 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/27 17:10:37 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#include "ft_read.h"

void	ft_read(void)
{
	int			fd;
	int			reading;
	void		*buf;
	char		first_line[10 * BUFFER_SIZE];
	int			letters;
	int			x;
	t_rush_info	*rush00;

	buf = (void *)malloc((1 + BUFFER_SIZE) * sizeof(char));
	fd = open(0, O_RDONLY);
	if (fd == -1)
		return ;
	reading = 1;
	letters = 0;
	while (reading)
	{
		if (reading != '\n')
		{
			reading = read(fd, buf, 1);
			first_line[x] = ((char *)buf)[x];
			++letters;
			++x;
		}
		rush00 = ft_rush_collector00(x, 1);
		if (!strcmp(strncpy(NULL, first_line, x), strncpy(NULL,
					rush00->print, x)))
			ft_putstr("it could be top00");
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

	close(fd);
}
