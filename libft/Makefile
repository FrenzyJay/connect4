#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvincent <jvincent@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 18:33:50 by jvincent          #+#    #+#              #
#    Updated: 2014/03/07 20:47:55 by jvincent         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = 		gcc
NAME = 		libft.a
CFLAGS = 	-Wall -Werror -Wextra -I includes -I printf/includes
SRCS =		ft_bzero.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_strcat.c \
			ft_strcmp.c \
			ft_strcpy.c \
			ft_strdup.c \
			ft_strlen.c \
			ft_strncat.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_putstr.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_strlcat.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strnrchr.c \
			ft_strstr.c \
			ft_strnstr.c \
			ft_strncpy.c \
			ft_strncmp.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_memalloc.c \
			ft_memdel.c \
			ft_strnew.c \
			ft_strdel.c \
			ft_strclr.c \
			ft_striter.c \
			ft_striteri.c \
			ft_strmap.c \
			ft_strmapi.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_strsplit.c \
			ft_destroysplit.c \
			ft_itoa.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putnbr_fd.c \
			ft_putendl.c \
			ft_putendl_fd.c \
			ft_error.c \
			ft_lstnew.c \
			ft_lstcount.c \
			ft_lstadd.c \
			ft_lstlast.c \
			ft_lst2tab.c \
			ft_putlst.c \
			bt_add.c \
			bt_new.c \
			ft_get_next_line.c \
			ft_putsplit.c \
			ft_strswap.c \
			ft_countchar.c \
			ft_addletter.c \
			ft_wordlen.c \
			ft_freeword.c \
			ft_putword.c \
			printf/ft_printf.c \
			printf/ft_puts.c \
			printf/ft_convert.c \
			printf/ft_utils.c \
			printf/ft_flags.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

printf/%.o: printf/%.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@echo Library done and sorted : $(NAME)

clean:
	@rm -f $(OBJ)
	@echo Objects deleted : $(NAME)

fclean:
	@rm -f $(NAME)
	@echo Library deleted : $(NAME)

re: fclean all

.PHONY: clean fclean re all
