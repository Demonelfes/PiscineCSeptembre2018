# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allopez <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/10 23:38:28 by allopez           #+#    #+#              #
#    Updated: 2019/04/11 17:15:15 by allopez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

IDIR = includes
_INC = libft.h
INC = $(patsubst %,$(IDIR)/%,$(_INC))

SDIR = .

_SRC =  ft_atoi.c \
		ft_putchar.c \
	   	ft_putstr.c \
		ft_strlen.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_strdup.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_bzero.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
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
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

OBJ = $(_SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror
OPTS = -c -I$(IDIR)


all : $(NAME)

$(NAME) : $(OBJ)
			@gcc $(FLAGS) $(OPTS) $(SRC)
			@ar rc $(NAME) $(OBJ)
			@ranlib $(NAME)
$(OBJ) : $(SRC)
	@gcc $(FLAGS) $(OPTS) $(SRC)
clean :
	@/bin/rm -rf $(OBJ)

fclean : clean
	@/bin/rm -rf $(NAME)

re : fclean all
.PHONY : all clean fclean re
