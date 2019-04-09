/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 16:44:09 by allopez           #+#    #+#             */
/*   Updated: 2019/04/09 16:58:48 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 	A CHECK COMME STREQU
 */

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	return (s1 && s2 ? !ft_strncmp(s1, s2, n) : 0);
}
