# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/22 14:53:21 by lsun              #+#    #+#              #
#    Updated: 2022/11/01 15:57:38 by lsun             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_*.c
OUTPUT = ft_*.o
INCLUDE = libft.h
CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME) $(SRCS)
$(NAME): $(SRCS)
	cc $(CFLAGS) $(SRCS) -I $(INCLUDE)
	ar rcs $(NAME) *.o
clean:
	/bin/rm -f *.o
fclean:clean
	/bin/rm -f $(NAME)
re: fclean all
