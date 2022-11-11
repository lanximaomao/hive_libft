# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: linlinsun <linlinsun@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 15:48:08 by linlinsun         #+#    #+#              #
#    Updated: 2022/11/11 15:48:12 by linlinsun        ###   ########.fr        #
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
