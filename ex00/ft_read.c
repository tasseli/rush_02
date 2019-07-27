/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:43 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/27 13:51:26 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read.h"

void	read(int fd)
{
	int		fd;
	int		reading;
	void	*buf;
	char	first_line[10 * BUFFER_SIZE];
	int		letters;
	int		x;

	buf = (void *)malloc((1 + BUFFER_SIZE) * sizeof(char));
	fd = open(0, O_RDONLY);
	if (fd == -1)
		return (1);
	reading = 1;
	letters = 0;
	while (reading)
	{
		if (reading != '\n')
		{
			reading = read(fd, buf, 1);
			first_line[x] = buf[x];
			++letters;
			++x;
		}
		char line1[x];
		char line2[x];
		ft_strncpy(line1, first_line, x);
		ft_strncpy(line2, ft_top00, x);
		if (!ft_strcmp(line1, line2))
			ft_putstr("it could be top00");

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

//			quit
