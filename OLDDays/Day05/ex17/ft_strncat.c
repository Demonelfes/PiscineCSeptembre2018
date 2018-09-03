/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 15:19:14 by allopez           #+#    #+#             */
/*   Updated: 2018/09/02 15:20:15 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	char	*cat_dest;

	i = 0;
	cat_dest = dest + ft_strlen(dest);
	while (src[i] && i <= nb)
	{
		cat_dest[i] = src[i];
		i++;
	}
	cat_dest[i] = '\0';
	return (dest);
}
