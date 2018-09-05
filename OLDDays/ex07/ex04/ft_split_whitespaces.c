/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 15:09:06 by allopez           #+#    #+#             */
/*   Updated: 2018/09/05 22:10:28 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str)
{
	int		i;
	int		j;
	int		words;

	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
		{
			j = 1;
			i++;
		}
		if (str[i] == '\0' || str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
				words += (j == 1) ? 1 : 0;
				j = 0;
				i++;
		}
	}
	return (words);
}

int		words_len(char *str)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	if (!(tab = (char**)malloc(sizeof(char*) * (count_words(str) + 1))))
		return (0);
	while (str[i])
	{
		j = 0;
		if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			if (!(tab[k] = (char *)malloc(sizeof(char) * (words_len(&str[i] + 1)))))
				return (0);
			while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i])
			{
				tab[k][j] = str[i];
				j++;
				i++;
			}
			tab[k][j] = '\0';
			k++;
		}
		else
			i++;
	}
	tab[k] = NULL;
	return (tab);
}
