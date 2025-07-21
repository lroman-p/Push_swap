# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lroman-p <lroman-p@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 16:25:01 by lroman-p          #+#    #+#              #
#    Updated: 2025/07/20 16:25:04 by lroman-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I

SRC = ft_isdigit.c .../main.c
OBJ = $(SRC:.c=.o)

PRINTF_OBJS = ft_printf/ft_printf.o ft_printf/ft_printf_nbr.o \
            ft_printf/ft_printf_string.o ft_printf/ft_printf_char.o \
			ft_printf/ft_printf_hexadecimal.o ft_printf/ft_printf_pointers.o \
            ft_printf/ft_printf_unsigned.o

all: $(NAME)

$(NAME):$(OBJ) $(PRINTF_OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(PRINTF_OBJS)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re 