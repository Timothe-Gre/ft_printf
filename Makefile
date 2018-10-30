# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tigre <tigre@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/27 00:36:32 by tigre             #+#    #+#              #
#    Updated: 2018/10/30 16:11:18 by ghtouman         ###   ########.fr        #
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
	  $(SRC_PATH)ft_control.c			\
	  $(SRC_PATH)ft_print_int.c			\
	  $(SRC_PATH)ft_print_long.c		\
	  $(SRC_PATH)ft_print_unsigned_int.c\
	  $(SRC_PATH)modif_h_hh.c			\
	  $(SRC_PATH)modif_l_ll.c			\
	  $(SRC_PATH)modif_j_z.c			\
	  $(SRC_PATH)ft_putnbr_base.c		\
	  $(SRC_PATH)ft_len_number.c		\
	  $(SRC_PATH)ft_print_char.c		\
	  $(SRC_PATH)ft_putwchar.c			\
	  $(SRC_PATH)ft_putwstr.c


OBJ = $(SRC:c=o)

all:$(NAME)
$(NAME): $(OBJ) $(LIB)
	gcc $(OBJ) $(LIB) -g -I $(LIB_PATH) -o $(NAME) -fsanitize=address

%.o: %.c
	gcc -c -g $< -o $@ -I$(IDIR) -fsanitize=address

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
