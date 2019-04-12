/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:12:57 by allopez           #+#    #+#             */
/*   Updated: 2019/04/12 16:48:59 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	unsigned int	start;
	size_t		len;
	size_t		end_sp;
	char	*new;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] == '\n' || s[start] == '\t' || s[start] == ' ')
		start++;
	len = (ft_strlen(s));
	while (s[len - 1] == '\n' || s[len - 1] == '\t' || s[len - 1] == ' ')
		len--;
	end_sp = len - start;
	if (start == ft_strlen(s))
	{
		new = ft_strnew(0);
		return (new);
	}
	new = ft_strsub(s, start, end_sp);
	return (new);
}
