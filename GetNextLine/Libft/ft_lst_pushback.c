/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 12:56:25 by allopez           #+#    #+#             */
/*   Updated: 2019/04/18 12:56:26 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_pushback(t_list **begin_list, void *data)
{
	if (*begin_list)
	{
		if (((*begin_list)->next))
			ft_lst_pushback(&((*begin_list)->next), data);
		else
			((*begin_list)->next) = ft_create_elem(data);
	}
	else
		(*begin_list) = ft_create_elem(data);
}
