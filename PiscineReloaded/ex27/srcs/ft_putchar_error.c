/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 15:38:23 by allopez           #+#    #+#             */
/*   Updated: 2018/09/17 15:38:24 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	ft_putchar_error(char c)
{
	write(2, &c, 1);
}