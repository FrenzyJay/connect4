#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 18:33:50 by jvincent          #+#    #+#              #
#    Updated: 2014/03/08 14:04:21 by jvincent         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = 			cc
NAME = 			puissance4
CFLAGS = 		-Wall -Werror -Wextra -g
CFLAGS +=		-I./includes \
				-I./libft/includes
LDFLAGS = 		-L libft -lft
INCLUDE_LIB = 	libft/includes
LIB = 			libft
SRCS = 			srcs/main.c \
				srcs/ft_newtab.c \
				srcs/ft_puttab.c \
				srcs/ft_destroytab.c \
				srcs/ft_win.c \
				srcs/ft_win_more.c
OBJ = 			$(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

$(NAME): $(OBJ) 
	@make -sC libft
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LDFLAGS)
	@echo $(NAME) ok

clean:
	@make clean -sC libft
	@rm -f $(OBJ)
	@echo Objects deleted : $(NAME)

fclean: clean
	@make fclean -sC libft
	@rm -f $(NAME)
	@echo $(NAME) deleted

re: fclean all

.PHONY: clean fclean re all

