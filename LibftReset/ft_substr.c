/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:01:57 by allopez           #+#    #+#             */
/*   Updated: 2020/01/11 14:07:33 by allopez          ###   ########.fr       */
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
