# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aratinau <aratinau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/29 14:40:28 by aratinau          #+#    #+#              #
#    Updated: 2015/06/29 16:51:18 by aratinau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = doubly_linked_list

SRC = doubly_linked_list_add.c \
	  doubly_linked_list_display.c \
	  doubly_linked_list_remove.c \
	  doubly_linked_list_display.c \
	  main.c

OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra

$(NAME):$(OBJ)
	make -C ../libraire/ ##
	$(CC) $(CFLAGS) $^ -o $(NAME) \
	../libraire/libft.a ##

all: $(NAME)

%.o:%.c
	$(CC) -c $(SRC) $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
