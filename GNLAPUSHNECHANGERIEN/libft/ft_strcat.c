/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 14:54:29 by allopez           #+#    #+#             */
/*   Updated: 2019/04/08 14:51:28 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int		i;
	char	*cat_dest;

	i = 0;
	cat_dest = dest + ft_strlen(dest);
	while (src[i])
	{
		cat_dest[i] = src[i];
		i++;
	}
	cat_dest[i] = '\0';
	return (dest);
}
