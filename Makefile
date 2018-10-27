# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tigre <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/27 00:36:32 by tigre             #+#    #+#              #
#    Updated: 2018/10/27 06:13:40 by tigre            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAG = -Wall -Werror -Wextra
IDIR = ./includes/
NAME = a.out
LIB_PATH = ./libft/
LIB = libft/libft.a
SRC_PATH = ./srcs/

SRC = $(SRC_PATH)main.c					\
	  $(SRC_PATH)ft_printf.c			\
	  $(SRC_PATH)ft_parse_flags.c		\
	  $(SRC_PATH)ft_check_characters.c	\
	  $(SRC_PATH)ft_check_width.c		\
	  $(SRC_PATH)ft_check_precision.c	\
	  $(SRC_PATH)ft_check_modifier.c	\
	  $(SRC_PATH)ft_check_specifier.c	\
	  $(SRC_PATH)ft_print.c

OBJ = $(SRC:c=o)

all:$(NAME)
$(NAME): $(OBJ) $(LIB)
	gcc $(OBJ) $(LIB) -g -I $(LIB_PATH) -o $(NAME) -fsanitize=address

%.o: %.c
	gcc $(FLAG) -c -g $< -o $@ -I$(IDIR) -fsanitize=address

$(OBJ) : $(IDIR)ft_printf.h

clean:
	rm -f $(OBJ)
	make clean -C $(LIB_PATH)

fclean: clean
	rm -f $(NAME)
	rm -f $(LIB)

re : fclean all

libft/libft.a:
	make -C libft
