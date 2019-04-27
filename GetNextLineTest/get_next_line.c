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

char		*subandfree(char **line, char *str, unsigned int start, size_t len)
{
	char	*tmp;
	int		i;

	/*if (!str || !(tmp = ft_strnew(len)))
		return (NULL);
	ft_strncpy(tmp, str + start, len);
	return (tmp);*/

	/*len = 0;
	while (str[len] != '\n' && str[len] != '\0')
		len++;
	if (str[len] == '\n')
	{
		
	}*/
	(*line) = ft_strsub(str, 0, len);
	tmp = ft_strdup(str + len + 1);
	free(str);
	str = tmp;
	if (str[0] == '\0')
		ft_strdel(&str);
	return (str);
}

int			get_next_line(const int fd, char **line)
{
	static char		*str;
	int				i;

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
			(*line) = ft_strnew(1);
		else
		{
			(*line) = subandfree(line, str, 0, i);
			str = &str[i + 1];
		}
		return (1);
	}
	else
		(*line) = ft_strnew(1);
	return (fd - 1 || line == NULL ? -1 : 0);
}
