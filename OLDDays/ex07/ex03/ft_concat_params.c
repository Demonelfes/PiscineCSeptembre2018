/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 22:06:24 by allopez           #+#    #+#             */
/*   Updated: 2018/09/05 21:56:37 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	return (dest);
}

char	*ft_concat_params(int ac, char **av)
{
	char	*str;
	int		i;
	int		j;
	int		params_count;

	params_count = 0;
	while (params_count < ac)
	{
		j = 0;
		while (av[j])
		{
			params_count++;
			j++;
		}
	}
	if (!(str = (char*)malloc(sizeof(char*) * (params_count + 1))))
		return (0);
	i = 0;
	while (i < ac - 1)
	{
		str = ft_strcat(str, av[i + 1]);
		i++;
	}
	return (str);
}
