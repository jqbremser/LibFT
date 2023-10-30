# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 14:16:09 by jbremser          #+#    #+#              #
#    Updated: 2023/10/30 15:38:43 by jbremser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

CFILES =	ft_isalnum.c\
			ft_isascii.c\
			ft_isprint.c\
			ft_memset.c\
			ft_strlcpy.c\
			ft_tolower.c\
			ft_bzero.c\
			ft_isalpha.c\
			ft_isdigit.c\
			ft_memcpy.c\
			ft_strchr.c\
			ft_strlen.c\
			ft_toupper.c\

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

fclean : 
	clean	rm -f $(NAME)

re : fclean $(NAME)

.PHONY : all clean fclean re
