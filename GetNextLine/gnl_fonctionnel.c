/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:35:27 by allopez           #+#    #+#             */
/*   Updated: 2019/04/29 17:44:09 by allopez          ###   ########.fr       */
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
		str = ft_strjoin(str, buff);
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
	//	if (i == 0)
	//		ft_bzero((*line), 1);
		//else
	//	{
		if (str[i] == '\n')
		{
			(*line) = ft_strsub(str, 0, i);
			str = &str[i + 1];
		}
	//	}
		return (1);
	}
	//else
	//	ft_bzero((*line), 1);
	return (fd - 1 || line == NULL ? -1 : 0);
}