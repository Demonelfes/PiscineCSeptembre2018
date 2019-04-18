/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:53:22 by allopez           #+#    #+#             */
/*   Updated: 2018/09/13 15:19:19 by allopez          ###   ########.fr       */
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
