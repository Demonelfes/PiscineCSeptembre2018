/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:35:27 by allopez           #+#    #+#             */
/*   Updated: 2019/04/26 13:42:09 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			check_error(int fd, char **str, char **line)
{
	if (!*str)
	{
		if (!(*str = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1))))
			return (-1);
	}
	return (fd == -1 || line == NULL ? -1 : 0);
}

char		*readline(char *str, int fd)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;

	while ((ret = read(fd, buff, BUFF_SIZE) > 0))
	{
		buff[ret] = '\0';
		str = ft_strjoin(str, buff);
	}
	return (str);
}

int			get_next_line(const int fd, char **line)
{
	static char		*str;
	int				i;

	if (check_error(fd, &str, line) == -1)
		return (-1);
	if (*str)
		ft_strcpy(*line, str);
	i = 0;
	str = readline(str, fd);
	if (str[i])
	{
		while (str[i] != '\n' && str[i])
			i++;
		if (i == 0)
			(*line) = ft_strnew(1);
		else
		{
			(*line) = ft_strsub(str, 0, i);
			str = &str[i + 1];
		}
		return (1);
	}
	else
		(*line) = ft_strnew(1);
	return (0);
}
