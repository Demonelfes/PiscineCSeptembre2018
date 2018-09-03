/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 15:20:36 by allopez           #+#    #+#             */
/*   Updated: 2018/09/02 15:35:11 by allopez          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	char	*cat_dest;

	i = 0;
	cat_dest = dest + ft_strlen(dest);
	while (src[i] && i <= size)
	{
		cat_dest[i] = src[i];
		i++;
	}
	cat_dest[i] = '\0';
	return (dest);
}
