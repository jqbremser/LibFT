# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 10:55:21 by jbremser          #+#    #+#              #
#    Updated: 2023/11/01 11:25:11 by jbremser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

CFILES = ft_isalnum.c \
		 ft_isdigit.c \
		 ft_memmove.c \
		 ft_strchr.c \
		 ft_strlen.c \
		 ft_isalpha.c \
		 ft_isprint.c \
		 ft_memset.c \
		 ft_tolower.c \
		 ft_bzero.c \
		 ft_isascii.c \
		 ft_memcpy.c \
		 ft_putchar_fd.c \
		 ft_strlcpy.c \
		 ft_toupper.c \

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME) clean

$(NAME) : $(OFILES)
	ar -rcs $(NAME) $(OFILES)

clean :
	rm -f $(OFILES)

fclean:
	rm -f $(OFILES)

re: fclean $(NAME)

.PHONY : all clean fclean re
