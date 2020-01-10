/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:12:57 by allopez           #+#    #+#             */
/*   Updated: 2020/01/10 15:27:55 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s1, char const *set)
{
	unsigned int	start;
	size_t			len;
	size_t			end_sp;
	char			*new;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]) != NULL)
		start++;
	len = ft_strlen(s1);
	if (len != 0)
	{
		while (s1[start + len - 1] 
				&& ft_strchr(set, s1[start + len - 1]) != NULL)
			len--;
	}
	return (ft_substr(s1, start, len));
}
