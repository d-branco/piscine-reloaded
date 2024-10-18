# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/17 19:19:45 by abessa-m          #+#    #+#              #
#    Updated: 2024/10/18 10:20:52 by abessa-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c

libft.a: 
	cc -c $(SRCS) -Iincludes/
	ar r libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
#	rm *.o
# removes the files *.o after the library is ready

.PHONY: all clean fclean re

all: libft.a

clean:
	rm -f *.o

fclean: clean
	rm -f libft.a

re: fclean all
