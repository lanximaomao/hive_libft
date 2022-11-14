# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsun <lsun@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/11 15:48:08 by linlinsun         #+#    #+#              #
#    Updated: 2022/11/14 13:33:03 by lsun             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_itoa.c ft_memchr.c ft_strchr.c ft_strrchr.c ft_memcmp.c ft_strdup.c ft_strtrim.c\
ft_atoi.c ft_memcpy.c ft_striteri.c ft_substr.c ft_bzero.c ft_memmove.c ft_strjoin.c ft_tolower.c\
ft_calloc.c ft_memset.c ft_strlcat.c ft_toupper.c ft_isalnum.c ft_putchar_fd.c ft_strlcpy.c\
ft_isalpha.c ft_putendl_fd.c ft_strlen.c ft_isascii.c ft_putnbr_fd.c ft_strmapi.c\
ft_isdigit.c ft_putstr_fd.c ft_strncmp.c ft_isprint.c ft_split.c ft_strnstr.c
BONUS_SRCS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c\
ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
OUTPUT = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
INCLUDE = libft.h
CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME) $(SRCS)
$(NAME): $(SRCS)
	cc $(CFLAGS) $(SRCS) -I $(INCLUDE)
	ar rcs $(NAME) $(OUTPUT)
bonus:
	cc $(CFLAGS) $(BONUS_SRCS) -I $(INCLUDE)
	ar rcs $(NAME) $(BONUS_OBJS)
clean:
	/bin/rm -f $(OUTPUT) $(BONUS_OBJS)
fclean:clean
	/bin/rm -f $(NAME)
re: fclean all
