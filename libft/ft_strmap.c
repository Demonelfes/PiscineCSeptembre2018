/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 14:19:19 by allopez           #+#    #+#             */
/*   Updated: 2019/04/09 16:03:56 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	int		i;
	char	*map;

	if (!(s && f) || !(map = ft_strnew(ft_strlen(s))))
		return (NULL);

	i = 0;
	while (s[i])
	{
		map[i] = (*f)(s[i]);
		i++;
	}
	return (map);
}
