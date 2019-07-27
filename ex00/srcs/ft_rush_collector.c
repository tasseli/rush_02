/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush_collector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 14:05:03 by sreijola          #+#    #+#             */
/*   Updated: 2019/07/27 17:22:13 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

t_rush_info	*ft_rush_collector00(int x, int y)
{
	char	*ans;
	int		i;
	t_rush_info *myinfo;

	myinfo = (t_rush_info *)malloc(sizeof(t_rush_info));
	ans = (char *)malloc((x * y + 1) * sizeof(char));
	i = 1;
	if (y == 1)
		strncpy(ans, ft_top00(x), x);
	else if (y > 1)
	{
		strncpy(ans, ft_top00(x), x);
		while (i <= y - 2)
		{
			strncpy(&ans[i * x], ft_mid00(x), x);
			i++;
		}
		strncpy(&ans[(y - 1) * x], ft_bot00(x), x);
		ans[y * x] = '\0';
	}
	strcpy(myinfo->name, "rushcollector00");
	myinfo->print = ans;
	return (myinfo);
}
