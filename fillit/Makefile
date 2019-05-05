NAME = fillit

IDIR = includes
_INC = fillit.h
INC = $(patsubst %,$(IDIR)/%,$(_INC))\

SDIR = srcs

_SRC =  main.c \

SRC = $(patsubst %,$(SDIR)/%,$(_SRC))

OBJ = $(_SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror
OPTS = -o $(NAME) -I$(IDIR)

all : $(NAME)

$(NAME) : $(OBJ)
	@gcc $(FLAGS) $(OPTS) $(SRC)
$(OBJ) : $(SRC)
	@gcc -c -I$(IDIR) $(SRC)
clean :
	@/bin/rm -rf $(OBJ)

fclean : clean
	@/bin/rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
