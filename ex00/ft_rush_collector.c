/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush_collector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 14:05:03 by sreijola          #+#    #+#             */
/*   Updated: 2019/07/27 16:31:17 by mnenonen         ###   ########.fr       */
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
		ft_strncpy(ans, ft_top00(x), x);
	else if (y > 1)
	{
		ft_strncpy(ans, ft_top00(x));
		while (i <= y - 2)
		{
			ft_strncpy(&ans[i * x], ft_mid00(x));
			i++;
		}
		ft_strncpy(ans[(y - 1) * x], ft_bot00(x));
		ans[y * x] = '\0';
	}
	ft_strcpy(myinfo->name, "rushcollector00");
	myinfo->print = ans;
	return (myinfo);
}

int			main(void)
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
