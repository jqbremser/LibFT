# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbremser <jbremser@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 10:55:21 by jbremser          #+#    #+#              #
#    Updated: 2023/11/23 10:07:57 by jbremser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

CFILES = ft_memset.c \
		 ft_bzero.c \
		 ft_calloc.c \
		 ft_memcpy.c \
		 ft_memmove.c \
		 ft_memchr.c \
		 ft_memcmp.c \
		 ft_strlen.c \
		 ft_strdup.c \
		 ft_strlcat.c \
		 ft_strlcpy.c \
		 ft_strchr.c \
		 ft_strrchr.c \
		 ft_strnstr.c \
		 ft_strncmp.c \
		 ft_atoi.c \
		 ft_itoa.c \
		 ft_isalpha.c \
		 ft_isdigit.c \
		 ft_isalnum.c \
		 ft_isascii.c \
		 ft_isprint.c \
		 ft_toupper.c \
		 ft_tolower.c \
		 ft_putchar_fd.c \
		 ft_putnbr_fd.c \
		 ft_substr.c \
		 ft_strtrim.c \
		 ft_split.c \
		 ft_strjoin.c \
		 ft_putstr_fd.c \
		 ft_putendl_fd.c \
		 ft_strmapi.c \
		 ft_striteri.c 

BCFILES = ft_lstnew_bonus.c \
		  ft_lstadd_front_bonus.c \
		  ft_lstsize_bonus.c

BOFILES = $(BCFILES:.c=.o)

OFILES = $(CFILES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = cc

all: $(NAME) 

$(NAME): $(OFILES)
	ar -rcs $(NAME) $(OFILES)

clean:
	rm -f $(OFILES) $(BOFILES) .bonus

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

bonus : .bonus 

.bonus: $(BOFILES) $(OFILES)
	ar -rcs $(NAME) $(BOFILES) $(OFILES)
	@touch .bonus

.PHONY : all clean fclean re bonus
