#***************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marrow <marrow@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 21:44:43 by marrow            #+#    #+#              #
#    Updated: 2019/12/04 20:34:13 by marrow           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror
INC = includes
SRC =	src/ft_atoi.c \
		src/ft_bzero.c \
		src/ft_create_elem.c \
		src/ft_copybyte.c \
		src/ft_isblanki.c \
		src/ft_islower.c \
		src/ft_isupper.c \
		src/ft_strnlen.c \
		src/ft_memalloc.c \
		src/ft_memccpy.c \
		src/ft_memchr.c \
		src/ft_memcmp.c \
		src/ft_memcpy.c \
		src/ft_memdel.c \
		src/ft_memmove.c \
		src/ft_memset.c \
		src/ft_strcat.c \
		src/ft_strchr.c \
		src/ft_strclr.c \
		src/ft_strcmp.c \
		src/ft_strcpy.c \
		src/ft_strdel.c \
		src/ft_strdup.c \
		src/ft_strequ.c \
		src/ft_isalpha.c \
		src/ft_isprint.c \
		src/ft_isalnum.c \
		src/ft_isascii.c \
		src/ft_isdigit.c \
		src/ft_striter.c \
		src/ft_striteri.c \
		src/ft_strjoin.c \
		src/ft_strlcat.c \
		src/ft_strlen.c \
		src/ft_strmap.c \
		src/ft_strmapi.c \
		src/ft_strncat.c \
		src/ft_strncmp.c \
		src/ft_strncpy.c \
		src/ft_strnequ.c \
		src/ft_strnew.c \
		src/ft_strnstr.c \
		src/ft_strrchr.c \
		src/ft_strstr.c \
		src/ft_strsub.c \
		src/ft_strtrim.c \
		src/ft_tolower.c \
		src/ft_toupper.c \
		src/ft_strsplit.c \
		src/ft_itoa.c \
		src/ft_putchar.c \
		src/ft_putstr.c \
		src/ft_putendl.c \
		src/ft_putnbr.c \
		src/ft_putchar_fd.c \
		src/ft_putstr_fd.c \
		src/ft_putendl_fd.c \
		src/ft_putnbr_fd.c \
		src/ft_lstnew.c \
		src/ft_lstadd.c \
		src/ft_lstdel.c \
		src/ft_lstdelone.c \
		src/ft_lstiter.c \
		src/ft_lstmap.c \
		src/ft_strchri.c \
		src/get_next_line.c \
		src/ft_number_length.c \
		src/ft_putnbrll.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: %.c $(INC)
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INC)

clean:
	@/bin/rm -f $(OBJ)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
