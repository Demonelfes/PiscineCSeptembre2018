/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 13:11:49 by allopez           #+#    #+#             */
/*   Updated: 2019/04/18 13:44:17 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_base(const char *base)
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

void			ft_putnbr_base_fd(int nbr, const char *base, int fd)
{
	int		base_n;

	base_n = check_base(base);
	if (base_n >= 2)
	{
		if (nbr == -2147483648)
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_base_fd(-1 * (nbr / base_n), base, fd);
			ft_putchar_fd(base[-1 * (nbr % base_n)], fd);
		}
		else if (nbr < 0)
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_base_fd(-nbr, base, fd);
		}
		else if (nbr >= base_n)
		{
			ft_putnbr_base_fd(nbr / base_n, base, fd);
			ft_putnbr_base_fd(nbr % base_n, base, fd);
		}
		else
			ft_putchar_fd(base[nbr], fd);
	}
}
