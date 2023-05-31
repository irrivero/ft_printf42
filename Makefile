# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irivero- <irivero-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/31 15:18:45 by irivero-          #+#    #+#              #
#    Updated: 2023/05/31 15:42:41 by irivero-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CCFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -f

NAME = libftprintf.a

SRC = ft_printf.c \
		ft_putchar.c \
		ft_puthex.c \
		ft_puthexu.c \
		ft_putnbr.c \
		ft_putpunt.c \
		ft_putstr.c \
		ft_putud.c \
		ft_strlen.c 

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ) ft_printf.h
		@ar rc $(NAME) $(OBJ)

.PHONY: all clean fclean re

clean:
	@$(RM) $(OBJ)
fclean: clean
	@$(RM) $(NAME)
re: clean all