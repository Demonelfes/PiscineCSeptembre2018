/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:06:24 by allopez           #+#    #+#             */
/*   Updated: 2019/04/11 15:16:48 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;

	if (!(s1 && s2) || !(str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);

	ft_strcpy(str, s1);
	ft_strcpy(str + ft_strlen(s1) , s2);
	return (str);
}
