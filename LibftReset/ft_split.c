/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 16:56:23 by allopez           #+#    #+#             */
/*   Updated: 2020/01/10 15:29:16 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static int		ct(const char *s, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
			len++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (len);
}

char			**ft_split(const char *s, char c)
{
	char	**dest;
	int		i;
	int		j;
	int		k;

	if (!s || !(dest = (char **)malloc(sizeof(char *) * (ct(s, c) + 1))))
		return (0);
	i = 0;
	while (!(j = 0) && s[i])
	{
		k = 0;
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			if (!(dest[j] = (char *)malloc(sizeof(char) * (len(&s[i], c) + 1))))
				return (0);
			while (s[i] && s[i] != c)
				dest[j][k++] = s[i++];
			dest[j++][k] = '\0';
		}
	}
	dest[j] = NULL;
	return (dest);
}
