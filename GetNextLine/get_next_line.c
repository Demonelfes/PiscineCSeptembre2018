/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:35:27 by allopez           #+#    #+#             */
/*   Updated: 2019/04/26 16:15:10 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*readline(char *str, int fd)
{
	char	buff[BUFF_SIZE + 1];
	char	*tmp;
	int		ret;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		tmp = ft_strjoin(str, buff);
		free(str);
		str = tmp;
		if (str[0] == '\0')
			ft_strdel(&str);
	}
	return (str);
}

int			get_next_line(const int fd, char **line)
{
	static char		*str;
	int				i;
	char	*tmp;

	if (!str)
		if (!(str = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1))))
			return (0);
	if (*str)
		ft_strcpy(*line, str);
	str = readline(str, fd);
	if (str[i] && !(i = 0))
	{
		while (str[i] != '\n' && str[i])
			i++;
		if (i == 0)
			ft_bzero((*line), 1);
		else
		{
			(*line) = ft_strsub(str, 0, i);
			tmp = ft_strdup((*line));
			free((*line));
			(*line) = tmp;
			str = &str[i + 1];
			if ((*line)[0] == '\0')
				ft_strdel(&(*line));
		}
		return (1);
	}
	else
		ft_bzero((*line), 1);
	return (fd - 1 || line == NULL ? -1 : 0);
}

// LE FREE LINE FAIT PASSER LES LEAKS DE 6 A 2. (En fait non, meme sans le free line les leaks sont a 2 bizzarement.)
// GROS PROBLEME DE MALLOC SI LE TEXT EST TROP LONG. IL FAUT FIXE CA.
//dans cette version, ca ne marche donc pas si le text est trop long, et ca leaks 2 fois.

