/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush_collector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 14:05:03 by sreijola          #+#    #+#             */
/*   Updated: 2019/07/28 19:48:07 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"

t_rush_info	*ft_rush_collector00(int x, int y)
{
	char		*ans;
	int			i;
	t_rush_info	*myinfo;

	myinfo = (t_rush_info *)malloc(sizeof(t_rush_info));
	ans = (char *)malloc((x * (y + 1) + 1) * sizeof(char));
	i = 1;
	if (y == 1)
	{
		strncpy(ans, ft_top00(x), x + 1);
		ans[x] = '\n';
		ans[x + 1] = '\0';
	}
	else if (y > 1)
	{
		strncpy(ans, ft_top00(x), x + 1);
		while (i <= y - 2)
		{
			strncpy(&ans[i * (x + 1)], ft_mid00(x), x + 1);
			i++;
		}
		strncpy(&ans[(y - 1) * (x + 1)], ft_bot00(x), x + 1);
		if (x == 1)
		{
			ans[(y) * (x + 1)] = '\n';
			ans[(y) * (x + 1)] = '\0';
		}
		else
			ans[(y) * (x + 1)] = '\0';
	}
	strcpy(myinfo->name, "[rush-00]" );
	myinfo->print = ans;
	return (myinfo);
}

t_rush_info	*ft_rush_collector01(int x, int y)
{
	char		*ans;
	int			i;
	t_rush_info	*myinfo;

	myinfo = (t_rush_info *)malloc(sizeof(t_rush_info));
	ans = (char *)malloc((x * (y + 1) + 1) * sizeof(char));
	i = 1;
	if (y == 1)
	{
		strncpy(ans, ft_top01(x), x + 1);
		ans[x] = '\n';
		ans[x + 1] = '\0';
	}
	else if (y > 1)
	{
		strncpy(ans, ft_top01(x), x + 1);
		while (i <= y - 2)
		{
			strncpy(&ans[i * (x + 1)], ft_mid01(x), x + 1);
			i++;
		}
		strncpy(&ans[(y - 1) * (x + 1)], ft_bot01(x), x + 1);
		if (x == 1)
		{
			ans[(y) * (x + 1)] = '\n';
			ans[(y) * (x + 1)] = '\0';
		}
		else
			ans[(y) * (x + 1)] = '\0';
	}
	strcpy(myinfo->name, "[rush-01]");
	myinfo->print = ans;
	return (myinfo);
}

t_rush_info	*ft_rush_collector02(int x, int y)
{
	char		*ans;
	int			i;
	t_rush_info	*myinfo;

	myinfo = (t_rush_info *)malloc(sizeof(t_rush_info));
	ans = (char *)malloc((x * (y + 1) + 1) * sizeof(char));
	i = 1;
	if (y == 1)
	{
		strncpy(ans, ft_top02(x), x + 1);
		ans[x] = '\n';
		ans[x + 1] = '\0';
	}
	else if (y > 1)
	{
		strncpy(ans, ft_top02(x), x + 1);
		while (i <= y - 2)
		{
			strncpy(&ans[i * (x + 1)], ft_mid02(x), x + 1);
			i++;
		}
		strncpy(&ans[(y - 1) * (x + 1)], ft_bot02(x), x + 1);
		if (x == 1)
		{
			ans[(y) * (x + 1)] = '\n';
			ans[(y) * (x + 1)] = '\0';
		}
		else
			ans[(y) * (x + 1)] = '\0';
	}
	strcpy(myinfo->name, "[rush-02]");
	myinfo->print = ans;
	return (myinfo);
}

t_rush_info	*ft_rush_collector03(int x, int y)
{
	char		*ans;
	int			i;
	t_rush_info	*myinfo;

	myinfo = (t_rush_info *)malloc(sizeof(t_rush_info));
	ans = (char *)malloc((x * (y + 1) + 1) * sizeof(char));
	i = 1;
	if (y == 1)
	{
		strncpy(ans, ft_top03(x), x + 1);
		ans[x] = '\n';
		ans[x + 1] = '\0';
	}
	else if (y > 1)
	{
		strncpy(ans, ft_top03(x), x + 1);
		while (i <= y - 2)
		{
			strncpy(&ans[i * (x + 1)], ft_mid03(x), x + 1);
			i++;
		}
		strncpy(&ans[(y - 1) * (x + 1)], ft_bot03(x), x + 1);
		if (x == 1)
		{
			ans[(y) * (x + 1)] = '\n';
			ans[(y) * (x + 1)] = '\0';
		}
		else
			ans[(y) * (x + 1)] = '\0';
	}
	strcpy(myinfo->name, "[rush-03]");
	myinfo->print = ans;
	return (myinfo);
}

t_rush_info	*ft_rush_collector04(int x, int y)
{
	char		*ans;
	int			i;
	t_rush_info	*myinfo;

	myinfo = (t_rush_info *)malloc(sizeof(t_rush_info));
	ans = (char *)malloc((x * (y + 1) + 1) * sizeof(char));
	i = 1;
	if (y == 1)
	{
		strncpy(ans, ft_top04(x), x + 1);
		ans[x] = '\n';
		ans[x + 1] = '\0';
	}
	else if (y > 1)
	{
		strncpy(ans, ft_top04(x), x + 1);
		while (i <= y - 2)
		{
			strncpy(&ans[i * (x + 1)], ft_mid04(x), x + 1);
			i++;
		}
		strncpy(&ans[(y - 1) * (x + 1)], ft_bot04(x), x + 1);
		if (x == 1)
		{
			ans[(y) * (x + 1)] = '\n';
			ans[(y) * (x + 1)] = '\0';
		}
		else
			ans[(y) * (x + 1)] = '\0';
	}
	strcpy(myinfo->name, "[rush-04]");
	myinfo->print = ans;
	return (myinfo);
}
