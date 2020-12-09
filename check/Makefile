# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maragog <maragog@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 16:38:43 by maragog           #+#    #+#              #
#    Updated: 2020/05/26 00:51:03 by maragog          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Wextra -Werror

NAME = libft.a

HDR = -I ./

SRC = ft_isalpha.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memset.c \
ft_strlcat.c ft_strlen.c ft_strnstr.c ft_atoi.c ft_bzero.c ft_isalnum.c \
ft_isdigit.c ft_memccpy.c ft_memcmp.c ft_memmove.c ft_strchr.c ft_strlcpy.c \
ft_strncmp.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strrchr.c ft_strdup.c \
ft_split.c ft_strjoin.c ft_strtrim.c ft_substr.c ft_itoa.c ft_putchar_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strmapi.c

OBJ = ft_isalpha.o ft_isascii.o ft_isprint.o ft_memchr.o ft_memcpy.o ft_memset.o \
ft_strlcat.o ft_strlen.o ft_strnstr.o ft_atoi.o ft_bzero.o ft_isalnum.o \
ft_isdigit.o ft_memccpy.o ft_memcmp.o ft_memmove.o ft_strchr.o ft_strlcpy.o \
ft_strncmp.o ft_toupper.o ft_tolower.o ft_calloc.o ft_strrchr.o ft_strdup.o \
ft_strjoin.o ft_strtrim.o ft_substr.o ft_itoa.o ft_putchar_fd.o \
ft_putendl_fd.o ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_strmapi.o

all: $(NAME)

$(NAME): $(OBJ)
	gcc -c $(FLAG) $(SRC) $(HDR)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
