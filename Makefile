# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 09:54:51 by ghwa              #+#    #+#              #
#    Updated: 2023/08/07 10:41:08 by ghwa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_putstr.c ft_putnbr.c ft_putchar.c ft_strlen.c ft_itoa.c ft_putunbr.c ft_strdup.c ft_putuintptrox.c ft_putuintptr.c
OBJECT = ${SRC:.c=.o}
CFLAGS = -c -Wall -Werror -Wextra -I.
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJECT)
	ar crs $(NAME) $(OBJECT)

%.o: %.c
	gcc $(CFLAGS) $<

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
	rm -f a.out

re: fclean all

.PHONY = all clean fclean re
