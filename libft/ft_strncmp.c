/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 00:36:02 by allopez           #+#    #+#             */
/*   Updated: 2019/04/17 15:00:39 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	if (n == 0)
		return (0);
	i = 0;
	while (((unsigned char *)s1)[i] && ((unsigned char *)s2)[i]
			&& ((unsigned char *)s1)[i] == ((unsigned char *)s2)[i]
			&& i < n - 1)
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
