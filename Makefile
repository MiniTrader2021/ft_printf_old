# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adadgar <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 11:57:24 by adadgar           #+#    #+#              #
#    Updated: 2023/01/24 14:05:40 by adadgar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I . -c

RM = rm -f

SRCS = ft_char_type.c \
	   ft_printf.c \
	   ft_char_print.c \
	   ft_str_print.c \
	   ft_num_length.c \
	   ft_hex_print.c \
	   ft_num_print.c \

OBJ_DEST = mv *.o

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(CFLAGS) $(SRCS)
	$(OBJ_DEST)
	ar rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
		$(MAKE) fclean -C ./libft
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
