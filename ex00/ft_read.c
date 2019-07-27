/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:43 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/27 13:37:07 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read.h"

void	drop_alts(char ***alts_cont char *line,
		(*comparer)(char **alts, char*line))
{

}

void	read(int fd)
{
	int		fd;
	int		reading;
	void	*buf;
	char	first_line[10 * BUFFER_SIZE];
	int		letters;
	int		x;
	char	***alt_container;
	char	**alternatives;

	alternatives = {{"rush00"}, {"rush01"}, {"rush02"}, {"rush03"},
		{"rush04"}, {""}};
	alt_container = &alternatives;
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
		drop_alts(alt_container, first_line, &comparer);

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
