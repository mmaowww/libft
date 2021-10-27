# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 11:25:18 by ebetrix           #+#    #+#              #
#    Updated: 2021/10/27 11:57:28 by ebetrix          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
SRC = ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c

OBJ = $(SRC: .c = .o)

$(NAME): $(OBJ)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)

%.o: %.c
				$(CC) -I. -o $@ -c $? $(CFLAGS)

all: $(NAME)

clean:
				$(RM) $(OBJ)

fclean: clean
				$(RM) $(NAME)

re: fclean all

so:
	$(CC) -nostarfiles -fPIC $(CFLAGS) -c $(SRC)
	$(CC) -nostarfiles -shared -o libft.so $(OBJ)

.PHONY: clean clean
