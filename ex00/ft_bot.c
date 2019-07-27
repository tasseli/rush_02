/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0203.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:25 by sreijola          #+#    #+#             */
/*   Updated: 2019/07/27 13:38:45 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
/* length is the  amount of chars its actually gonna print, add 1 for null*/

char *ft_bot00(int len)
{
	char *mine;
	int i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len > 0)
	{
		mine[0] = 'o';
		while (i <= len - 2)
		{	
			mine[i] = '-';
			i++;
		}
		mine[len - 1] = 'o';
		mine[len] = '\0';
	}
	return (mine);
}

char *ft_bot01(int len)
{
	char *mine;
	int i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = '/';
	else if (len > 1)
	{
		mine[0] = '\\';
		while (i <= len - 2)
		{	
			mine[i] = '*';
			i++;
		}
		mine[len - 1] = '/';
		mine[len] = '\0';
	}
	return (mine);
}

char *ft_bot02(int len)
{
	char *mine;
	int i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'A';
	else if (len > 1)
	{
		mine[0] = 'C';
		while (i <= len - 2)
		{	
			mine[i] = 'B';
			i++;
		}
		mine[len - 1] = 'C';
		mine[len] = '\0';
	}
	return (mine);
}
char *ft_bot03(int len)
{
	char *mine;
	int i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'A';
	else if (len > 1)
	{
		mine[0] = 'A';
		while (i <= len - 2)
		{	
			mine[i] = 'B';
			i++;
		}
		mine[len - 1] = 'C';
		mine[len] = '\0';
	}
	return (mine);
}

char *ft_bot04(int len)
{
	char *mine;
	int i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'A';
	else if (len > 1)
	{
		mine[0] = 'C';
		while (i <= len - 2)
		{	
			mine[i] = 'B';
			i++;
		}
		mine[len - 1] = 'A';
		mine[len] = '\0';
	}
	return (mine);
}

int			main()
{
	char * first_line;
	int y;

	y = 1;
	first_line = ft_bot00(y);
printf("%s \n", first_line);
free (first_line);
	first_line = ft_bot01(y);
printf("%s \n", first_line);
free (first_line);
	first_line = ft_bot02(y);
printf("%s \n", first_line);
free (first_line);
	first_line = ft_bot03(y);
printf("%s \n", first_line);
free (first_line);
	first_line = ft_bot04(y);
printf("%s \n", first_line);
free (first_line);return (y);
}
