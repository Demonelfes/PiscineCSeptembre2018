/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 19:01:33 by allopez           #+#    #+#             */
/*   Updated: 2018/09/03 19:10:06 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int  ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (dest[j]  && j < size)
	{
		dest[j] = src[i + j];
		j++;
	}
	while (dest[j])
	{
		dest[j] = '\0';
		j++;
	}
	return (i);
}
