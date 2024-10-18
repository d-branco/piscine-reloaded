# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abessa-m <abessa-m@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/18 11:08:36 by abessa-m          #+#    #+#              #
#    Updated: 2024/10/18 16:26:13 by abessa-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

$(NAME):
	cc -Wall -Werror -Wextra ft_display_file.c -o $(NAME)
	rm -f *.o
	@echo "Suggested usage: ./ft_display_file l.txt"

.PHONY: all clean fclean

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
