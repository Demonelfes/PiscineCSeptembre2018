/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 15:17:48 by allopez           #+#    #+#             */
/*   Updated: 2019/04/08 15:29:45 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 	C'EST UNE COPIE DE STRSTR, IL Y A TOUT A FAIRE
*/
char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!to_find[i])
		return ((char *)str);
	while (i < len && str[i])
	{
		j = 0;
		while (i + j < len && str[i + j]
				&& to_find[j] && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
