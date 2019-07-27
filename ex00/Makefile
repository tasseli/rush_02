# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mnenonen <mnenonen@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/27 17:02:52 by mnenonen          #+#    #+#              #
#    Updated: 2019/07/27 17:23:12 by mnenonen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=readrush

SOURCES=srcs/ft_bot.c srcs/ft_rush_collector.c srcs/ft_top.c srcs/ft_mid.c\
		srcs/ft_strcpy.c srcs/ft_read.c srcs/ft_strncpy.c srcs/ft_putstr.c\
		srcs/main.c

all:
	gcc -Iincludes $(SOURCES) -o $(NAME)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
