# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebetrix <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/27 11:25:18 by ebetrix           #+#    #+#              #
#    Updated: 2021/11/21 16:33:31 by ebetrix          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f
SRC = ft_atoi.c ft_bzero.c ft_calloc.c \
		ft_isalpha.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isprint.c \
		ft_itoa.c \
		ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstmap.c ft_lstmap.c ft_lstnew.c ft_lstsize.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c ft_strlcpy.c ft_strdup.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlen.c \
		ft_strlcpy.c ft_strnstr.c ft_strncmp.c ft_strmapi.c \
		ft_strrchr.c ft_strtrim.c ft_substr.c \
		ft_tolower.c ft_toupper.c

OBJ = $(SRC:.c=.o)

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
