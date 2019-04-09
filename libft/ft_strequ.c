/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 16:04:21 by allopez           #+#    #+#             */
/*   Updated: 2019/04/09 17:55:32 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strequ(const char *s1, const char *s2)
{
	return (s1 && s2 ? (ft_strcmp(s1, s2) + 1) : 0);
}

/*int		main()
{
	const char	s1[] = "Salut";
	const char	s2[] = "SalutBonjour";

	printf("%d\n", ft_strequ(s1, s2));
}*/
