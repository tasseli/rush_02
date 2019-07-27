/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0203.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sreijola <sreijola@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:25 by sreijola          #+#    #+#             */
/*   Updated: 2019/07/27 12:55:03 by sreijola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
/* length is the  amount of chars its actually gonna print, add 1 for null*/

char *ft_top(int len)
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

int			main()
{
	char * first_line;

	first_line = ft_top(1);
printf("%s", first_line);
free (first_line);
return (0);
}


