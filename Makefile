# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 15:48:08 by linlinsun         #+#    #+#              #
#    Updated: 2022/11/14 13:18:39 by lsun             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_itoa.c ft_memchr.c ft_strchr.c ft_strrchr.c ft_memcmp.c ft_strdup.c ft_strtrim.c\
ft_atoi.c ft_memcpy.c ft_striteri.c ft_substr.c ft_bzero.c ft_memmove.c ft_strjoin.c ft_tolower.c\
ft_calloc.c ft_memset.c ft_strlcat.c ft_toupper.c ft_isalnum.c ft_putchar_fd.c ft_strlcpy.c\
ft_isalpha.c ft_putendl_fd.c ft_strlen.c ft_isascii.c ft_putnbr_fd.c ft_strmapi.c\
ft_isdigit.c ft_putstr_fd.c ft_strncmp.c ft_isprint.c ft_split.c ft_strnstr.c
OUTPUT = $(SRCS:.c=.o)
INCLUDE = libft.h
CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME) $(SRCS)
$(NAME): $(SRCS)
	cc $(CFLAGS) $(SRCS) -I $(INCLUDE)
	ar rcs $(NAME) $(OUTPUT)
clean:
	/bin/rm -f $(OUTPUT)
fclean:clean
	/bin/rm -f $(NAME)
re: fclean all
