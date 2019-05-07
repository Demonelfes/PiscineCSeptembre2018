#ifndef FILLIT_H
# define FILLIT_H
# include "libft/includes/libft.h"
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_tetri
{
	char	piece[4][2];
	char	letter;
}				t_tetri;

int		check_hash(char *map);
