# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aratinau <aratinau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/29 14:40:28 by aratinau          #+#    #+#              #
#    Updated: 2015/07/02 16:01:14 by aratinau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = doubly_linked_list

SRC2 =main.c \
	  doubly_linked_list_add.c \
	  doubly_linked_list_display.c \
	  doubly_linked_list_remove.c \
	  doubly_linked_list_find.c
SRC_PATH = ./
OBJ_PATH = ./obj/

OBJ2 = $(SRC2:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = $(addprefix $(SRC_PATH),$(SRC2))
OBJ = $(addprefix $(OBJ_PATH),$(OBJ2))

$(NAME):$(OBJ)
	make -C ../libraire/
	$(CC) $(CFLAGS) ../libraire/libft.a -o $(NAME) $(OBJ) 

all: $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || echo "" > /dev/null
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
