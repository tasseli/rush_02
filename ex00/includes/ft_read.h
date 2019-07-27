/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:10:03 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/27 17:10:55 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READ_H
# define FT_READ_H

# include <stdlib.h>
# include <unistd.h> // read, close

# include <sys/types.h> // open
# include <sys/stat.h>
# include <fcntl.h>

# include <string.h> // TODO remove

# define BUFFER_SIZE 1

void	ft_putstr(char *str);
//char	*ft_strncpy(char *str, const char *str, int n); Under repairs.
void	ft_read(void);
t_rush_info	*ft_rush_collector00(int x, int y);

#endif