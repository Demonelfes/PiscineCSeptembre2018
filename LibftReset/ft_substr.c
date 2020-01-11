/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 16:06:02 by allopez           #+#    #+#             */
/*   Updated: 2020/01/11 16:06:03 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s || !(str = ft_strnew(len)))
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	ft_strncpy(str, s + start, len);
	return (str);
}
