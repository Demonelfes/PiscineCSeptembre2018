/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 12:01:19 by allopez           #+#    #+#             */
/*   Updated: 2018/09/04 16:34:22 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base)
{
	int		i;
	int		len;

	len = 0;
	while (base[len])
	{
		if (base[len] == '-' || base[len] == '+')
			return (0);
		i = len;
		while (i--)
			if (base[i] == base[len])
				return (0);
		len++;
	}
	return (len);
}

int		pos_base(char *base, char c)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int		i;
	int		neg;
	int		result;
	int		base_n;

	i = 0;
	neg = 0;
	result = 0;
	base_n = check_base(base);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (pos_base(base, str[i]) != -1)
	{
		result = (result * base_n) + pos_base(base, str[i]);
		i++;
	}
	if (str[i])
		return (0);
	return (neg == 1 ? -result : result);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_atoi_base(av[1], av[2]));
}
