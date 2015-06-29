# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aratinau <aratinau@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/29 14:40:28 by aratinau          #+#    #+#              #
#    Updated: 2015/06/29 18:17:58 by aratinau         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = doubly_linked_list

SRC = doubly_linked_list_add.c \
	  doubly_linked_list_display.c \
	  doubly_linked_list_remove.c \
	  doubly_linked_list_display.c \
	  main.c

#OBJ = $(SRC:.c=.o)
OBJDIR := ./objdir/
OBJ = $(SRC:.c=.o)
P_OBJ = $(addprefix $(OBJDIR), $(OBJ))
CC = gcc
CFLAGS = -Wall -Werror -Wextra

$(NAME):$(P_OBJ)
	make -C ../libraire/ ##
	$(CC) $(CFLAGS) $(OBJDIR) $^ -o $(NAME) \
	../libraire/libft.a ##

#$(OBJDIR):
#	mkdir $(OBJDIR)

all: $(P_OBJ)

#$(P_OBJ): | $(OBJDIR)

$(OBJDIR)%.o : %.c
	$(CC) -c $(SRC) $(CFLAGS) -o $(OBJDIR)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)
