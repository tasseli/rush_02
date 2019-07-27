/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 11:08:43 by mnenonen          #+#    #+#             */
/*   Updated: 2019/07/27 11:46:46 by mnenonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read.h"

void	read(int fd)

//int open(const char *pathname, int flags, mode_t mode);

//ssize_t read(int fd, void *buf, size_t count);

//int close(int fd);

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

//			quit
