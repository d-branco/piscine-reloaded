# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/17 19:19:45 by abessa-m          #+#    #+#              #
#    Updated: 2024/10/17 19:19:46 by abessa-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRCS_DIR = srcs/
INCS_DIR = includes/

SRCS = $(SRCS_DIR)ft_putchar.c \
       $(SRCS_DIR)ft_putstr.c \
       $(SRCS_DIR)ft_strcmp.c \
       $(SRCS_DIR)ft_strlen.c \
       $(SRCS_DIR)ft_swap.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCS_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
