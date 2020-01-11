/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 16:04:52 by allopez           #+#    #+#             */
/*   Updated: 2020/01/11 16:04:53 by allopez          ###   ########.fr       */
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
