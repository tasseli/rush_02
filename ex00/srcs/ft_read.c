/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:43 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 19:58:31 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read.h"

int		findx(char *buf, int chars)
{
	int x;
	int i;
	
	i = 0;
	x = 0;
	while (x < chars && buf[i] != '\n' && buf[i] != '\0')
	{
		++i;
		++x;
	}
	return (x);
}

t_coords	*validate(void *buf, int chars)
{
	int			j;
	int			i;
	t_coords	*found;
	char		*c_buf;

	found = (t_coords *)malloc(sizeof(t_coords));
	c_buf = (char *)buf;
	found->x = 0;
	found->y = 0;
	if (chars == 0 || c_buf[0] == 0 || c_buf[0] == '\n')
		return (found);
	found->x = findx(c_buf, chars);
	j = 0;
	i = 0;
	while (j*i + i < chars)
	{
		i = 0;
		while (i < chars && c_buf[i] != '\n' && c_buf[i] != '\0')
			++i;
		if (c_buf[i] == 0 || i != found->x)
			return (found);
		++j;
	}
	found->y = j;
	return (found);
}

void	*ft_read(t_coords *findings)
{
	int			fd;
	void		*buf;
	char		first_line[1 + BUFFER_SIZE];
	t_coords	*found;
	int			chars;

	buf = (void *)malloc((1 + BUFFER_SIZE) * sizeof(char));
	chars = read(0, buf, BUFFER_SIZE);
	write(1, buf, BUFFER_SIZE); // TODO remove
	if (((char *)buf)[0] > 0)
	{
		found = validate(buf, chars);
		if (found->x == 0 || found->y == 0)
			return NULL;
		findings->x = found->x;
		findings->y = found->y;
		return (buf);
	}
	return (NULL);
}

int		find_matches(void *buf, t_coords *coords_found)
{
	int debugging = 1;
	t_rush_info	*knowns[5];
	t_rush_info	*rush00;
	int i;
	int found;

	knowns[0] = ft_rush_collector00(coords_found->x, coords_found->y);
	knowns[1] = ft_rush_collector01(coords_found->x, coords_found->y);
	knowns[2] = ft_rush_collector02(coords_found->x, coords_found->y);
	knowns[3] = ft_rush_collector03(coords_found->x, coords_found->y);
	knowns[4] = ft_rush_collector04(coords_found->x, coords_found->y);
	i = 0;
	found = 0;
	if (debugging) printf("buf:\n%s\n", ((char *)buf));
	while (i < 5)
	{
		if (!strcmp(buf, knowns[i]->print))
		{
			printf("%s\n", knowns[i]->name);
			if (debugging) printf("%s\n", knowns[i]->print);
			found++;
		}
		else
		{
			printf("aucune. %s\n", knowns[i]->name);
			if (debugging) printf("%s\n", knowns[i]->print);
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

