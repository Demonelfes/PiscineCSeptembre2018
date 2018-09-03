/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 01:23:47 by allopez           #+#    #+#             */
/*   Updated: 2018/09/02 03:28:34 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;

	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] +=32;
		i++;
	}

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z'
				&& (!str[i - 1] || i > 0 && str[i - 1] // TU DOIS CORRIGER LE WARNING DES && DANS LE || SALE FDP
					&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z') 
					&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
					&& !(str[i - 1] >= '0' && str[i - 1] <= '9')))
			str[i] -=32;
		i++;
	}
	return (str);
}
