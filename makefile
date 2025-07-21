# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lroman-p <lroman-p@student.42.madrid.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/20 16:59:51 by lroman-p          #+#    #+#              #
#    Updated: 2025/07/20 16:59:59 by lroman-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I. -Iincl -Iincl/ft_printf



COMMANDS_SRC = commands/push.c commands/rev_rotate.c commands/rotate.c \
				commands/sort_stacks.c commands/sort_three.c \
				commands/swap.c
CORE_SRC =	core/handle_errors.c  core/init_a_to_b.c \
				core/init_b_to_a.c core/push_swap.c \
				core/split.c core/stack_init.c \
				core/stack_utils.c
FT_ISDIGIT_SRC = incl/ft_isdigit.c
PRINTF_OBJS = incl/ft_printf/ft_printf.o \
				incl/ft_printf/ft_printf_nbr.o \
				incl/ft_printf/ft_printf_string.o \
				incl/ft_printf/ft_printf_char.o \
				incl/ft_printf/ft_printf_hexadecimal.o \
				incl/ft_printf/ft_printf_pointers.o \
				incl/ft_printf/ft_printf_unsigned.o

SRC = $(COMMANDS_SRC) $(CORE_SRC) $(FT_ISDIGIT_SRC)
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) $(PRINTF_OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(PRINTF_OBJS)

%.o: %.clean
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean               
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re