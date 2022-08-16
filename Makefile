# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgardine <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 19:24:33 by fgardine          #+#    #+#              #
#    Updated: 2022/07/07 18:31:59 by fgardine         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS := $(filter-out main.c, $(wildcard *.c)) #what tf
OBJS = $(SRCS:.c=.o)
RM = rm -f

all: $(NAME)
$(NAME):
	$(CC) $(CFLAGS) -c $(SRCS)
	ar -rcs $(NAME) $(OBJS)

main: atest.out
atest.out:
	$(CC) $(CFLAGS) $(wildcard *.c) -o atest.out

intm: atest.out
#atest.out:
	$(CC) $(CFLAGS) $(filter-out main.c, $(wildcard *.c)) -o atest.out

clean:
	$(RM) $(OBJS)
	# @echo "OBJS deleted"

fclean: clean
	$(RM) $(NAME)
	$(RM) atest.out
	# @echo "$(NAME) deleted"

re: fclean all

.PHONY: all main clean fclean re
