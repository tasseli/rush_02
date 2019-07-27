/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush_collector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 14:05:03 by sreijola          #+#    #+#             */
/*   Updated: 2019/07/27 15:27:05 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_top.h"

char	*ft_rush_collector00(int x, int y)
{
	char	*ans;
	int		i;

	ans = (char *)malloc((x * y + 1) * sizeof(char));
	i = 1;
	if (y == 1)
		ans[0] = ft_top00(x);
	else if (y > 1)
	{
		ans[0] = ft_top00(x);
		while (i <= y - 2)
		{
			ans[i] = ft_mid00(x);
			i++;
		}
		ans[y - 1] = ft_bot00(x);
		ans[y] = '\0';
	}
	return (ans);
}

int			main()
{
	int length = 9;
	char * first_line0;

	first_line0 = ft_rush_collector00(length, 3);
	printf("%s \n", first_line0);
	free (first_line0);
	return (0);
}
