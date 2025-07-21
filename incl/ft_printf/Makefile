# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lroman-p  <lroman-p@student.42madrid.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/22 13:47:04 by lroman-p          #+#    #+#              #
#    Updated: 2025/06/22 13:47:06 by lroman-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

INC				= inc/
SRC_DIR			= src/
OBJ_DIR			= obj/


CC				= gcc
 CFLAGS = -Wall -Wextra -Werror -I

RM				= rm -f
AR				= ar rcs

LIBFT_SRCS =	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
				ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c\
				ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_tolower.c\
				ft_toupper.c ft_strnstr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
				ft_memcmp.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_SRCS =	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c\
				ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c\
				ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

PRINTF_SRCS =	ft_printf/ft_printf.c ft_printf/ft_printf_char.c\
				ft_printf/ft_printf_nbr.c ft_printf/ft_printf_unsigned.c\
				ft_printf/ft_printf_string.c ft_printf/ft_printf_hexadecimal.c\
				ft_printf/ft_printf_pointers.c

GNL_SRCS =	get_next_line/get_next_line.c get_next_line/get_next_line_utils.c

SRCS	= $(LIBFT_SRCS) $(PRINTF_SRCS) $(GNL_SRCS)

OBJ 			= $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRC))

all: 			$(NAME)

$(NAME): 		$(OBJ)
				@$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c
				@mkdir -p $(@D)
				@$(CC) $(CFLAGS) $(INC) -c $< -o $@

clean:
				@$(RM) -r $(OBJ_DIR)
				@$(RM) .cache_exists

fclean: 		clean
				@$(RM) $(NAME)

re: 			fclean all

.PHONY: 		all clean fclean re
