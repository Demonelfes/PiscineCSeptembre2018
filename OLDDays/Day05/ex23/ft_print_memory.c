/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 11:16:39 by allopez           #+#    #+#             */
/*   Updated: 2018/09/04 16:36:22 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_hex(int nbr)
{
	char	*base;

	base = "0123456789abcdef";
		if (nbr >= base_n)
		{
			ft_putnbr_hex(nbr / base);
			ft_putnbr_hex(nbr % base);
		}
		else
			ft_putchar(base[nbr]);
}

void	*ft_print_memory(char *addr, unsigned int size)
{
	int		addr_mem;

	addr_mem = 0;

	while (addr[addr_mem])
}
