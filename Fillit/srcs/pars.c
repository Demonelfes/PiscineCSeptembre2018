/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 16:45:27 by allopez           #+#    #+#             */
/*   Updated: 2019/05/22 18:05:51 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int     check_char(char map[4][6])
{
	int     i;
	int     hash;
	int     dot;
	int     eol;

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

int		check_link(char map[4][6])
{
	int		x;
	int		y;
	int		link;

	x = 0;
	link = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 5)
		{
			if (map[x][y] == '#')
			{
				if (map[x + 1][y] == '#')
					link += 2;
				if (map[x][y + 1] == '#')
					link += 2;
			}
			y++;
		}
		x++;
	}
	return (link);
}

int		read_file(int fd, char *map, int len_tetri)
{
	int		ret;
	char	buff[BUFF_SIZE + 1];

	fd = open(map, O_RDONLY);
	if (fd == -1)
		return (-1);
	while (ret = read(fd, buff, BUFF_SIZE) > 0)
	{
		buff[ret] = '\0';
		check_char(map);

	}

}
