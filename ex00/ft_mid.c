/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mid.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:25 by sreijola          #+#    #+#             */
/*   Updated: 2019/07/27 13:31:27 by nzinovye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
/* length is the  amount of chars its actually gonna print, add 1 for null*/

char *ft_mid00(int len)
{
	char *mine;
	int i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = '|';
	else if (len > 1)
	{
		mine[0] = '|';
		while (i <= len - 2)
		{	
			mine[i] = ' ';
			i++;
		}
		mine[len - 1] = '|';
		mine[len] = '\0';
	}
	return (mine);
}

char *ft_mid01(int len)
{
	char *mine;
	int i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = '*';
	else if (len > 1)
	{
		mine[0] = '*';
		while (i <= len - 2)
		{	
			mine[i] = ' ';
			i++;
		}
		mine[len - 1] = '*';
		mine[len] = '\0';
	}
	return (mine);
}

char *ft_mid02(int len)
{
	char *mine;
	int i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'B';
	else if (len > 1)
	{
		mine[0] = 'B';
		while (i <= len - 2)
		{	
			mine[i] = ' ';
			i++;
		}
		mine[len - 1] = 'B';
		mine[len] = '\0';
	}
	return (mine);
}

char *ft_mid03(int len)
{
	char *mine;
	int i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'B';
	else if (len > 1)
	{
		mine[0] = 'B';
		while (i <= len - 2)
		{	
			mine[i] = ' ';
			i++;
		}
		mine[len - 1] = 'B';
		mine[len] = '\0';
	}
	return (mine);
}

char *ft_mid04(int len)
{
	char *mine;
	int i;

	mine = (char *)malloc((len + 1) * sizeof(char));
	i = 1;
	if (len == 1)
		mine[0] = 'B';
	else if (len > 1)
	{
		mine[0] = 'B';
		while (i <= len - 2)
		{	
			mine[i] = ' ';
			i++;
		}
		mine[len - 1] = 'B';
		mine[len] = '\0';
	}
	return (mine);
}


int			main()
{
	int length = 9;
	char * first_line0;
	char * first_line1;
	char * first_line2;
	char * first_line3;
	char * first_line4;

	first_line0 = ft_mid00(length);
printf("%s \n", first_line0);
free (first_line0);
	first_line1 = ft_mid01(length);
printf("%s \n", first_line1);
free (first_line1);
	first_line2 = ft_mid02(length);
printf("%s \n", first_line2);
free (first_line2);
	first_line3 = ft_mid03(length);
printf("%s \n", first_line3);
free (first_line3);
	first_line4 = ft_mid04(length);
printf("%s \n", first_line4);
free (first_line4);

return (0);
}


