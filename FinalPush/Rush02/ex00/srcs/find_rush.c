/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_rush.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 14:30:51 by allopez           #+#    #+#             */
/*   Updated: 2018/09/16 16:12:03 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colle2.h"

int		find_x(char *str)
{
	int		x;

	x = 0;
	while (str[x])
	{
		if (str[x] == '\n')
			return (x);
		x++;
	}
	return (0);
}

int		find_y(char *str)
{
	int		y;
	int		i;

	y = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			y++;
		i++;
	}
	return (y);
}

void	display_rush(char *name, int x, int y, int *first)
{
	if (*first == 0)
		ft_putstr(" || ");
	ft_putstr("[");
	ft_putstr(name);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
	*first = 0;
}

void	rush_comp(char *input)
{
	int		x;
	int		y;
	int		first;

	x = find_x(input);
	y = find_y(input);
	first = 1;
	if (x == 0 || y == 0)
	{
		ft_putstr("aucune\n");
		return ;
	}
	if (ft_strcmp(input, rush00(x, y)) == 0)
		display_rush("colle-00", x, y, &first);
	if (ft_strcmp(input, rush01(x, y)) == 0)
		display_rush("colle-01", x, y, &first);
	if (ft_strcmp(input, rush02(x, y)) == 0)
		display_rush("colle-02", x, y, &first);
	if (ft_strcmp(input, rush03(x, y)) == 0)
		display_rush("colle-03", x, y, &first);
	if (ft_strcmp(input, rush04(x, y)) == 0)
		display_rush("colle-04", x, y, &first);
	ft_putstr(first ? "aucune\n" : "\n");
}
