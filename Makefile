# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ghwa <ghwa@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 09:54:51 by ghwa              #+#    #+#              #
#    Updated: 2023/08/09 09:36:33 by ghwa             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_printf_utils.c
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
