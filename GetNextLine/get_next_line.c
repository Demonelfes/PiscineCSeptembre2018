/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 14:35:27 by allopez           #+#    #+#             */
/*   Updated: 2019/04/18 18:05:56 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;
	int		i_nl;

	if (fd < 0)
		return (-1);

	while (ret = read(fd, buff, BUFF_SIZE))
	{
		buff[ret] = '\0';
		i_nl = ft_strchr_index(buff);
	}
}
