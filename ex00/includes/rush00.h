/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 13:11:28 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/28 14:15:08 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH00_H
# define RUSH00_H

# include <unistd.h> // read, close

# include <sys/uio.h> // write?
# include <sys/types.h> // open
# include <sys/stat.h>
# include <fcntl.h>

# include <string.h> // TODO remove
# include "ft_rush.h"
# include "ft_read.h"

# define BUFFER_SIZE 1001

void	ft_putchar(char c);
void	ft_putstr(char *str);
//char	*ft_strncpy(char *str, const char *str, int n); Under repairs.
int	ft_read(void);

t_rush_info	*ft_rush_collect_test01(int x, int y);




#endif

