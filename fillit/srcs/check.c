#include "../includes/fillit.h"

int		overall_check(char *map)
{
	int		i;
	int		hash;
	int		dot;
	int		eol;

	i = 0;
	hash = 0;
	dot = 0;
	eol = 0;
	while (map[i])
	{
		if (map[i] == '#')
			hash++;
		else if (map[i] == '.')
			dot++;
		else if (map[i] == '\n')
			eol++;
		if (map[i] != '#' && map[i] != '.' && map[i] != '\n')
			return (0);
		i++;
	}
		if (hash != 4 || dot != 12 || eol != 4)
			return (0);
	return (1);
}

int		check_line(char *map, t_tetri *map)
{
	int		i;
	int		character;

	while (map->piece[i])
	{
		if (map->piece[i])
		{
			tpm = map->piece[i];
			i++;
		}
	}
}
