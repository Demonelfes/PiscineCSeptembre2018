/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 16:01:20 by allopez           #+#    #+#             */
/*   Updated: 2018/09/13 02:51:35 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		length;

	i = 0;
	length = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]))
			length++;
		i++;
	}
	return (length);
}