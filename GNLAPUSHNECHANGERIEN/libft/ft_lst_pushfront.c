/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pushfront.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 12:56:33 by allopez           #+#    #+#             */
/*   Updated: 2019/04/18 12:56:36 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_pushfront(t_list **begin_list, void *data)
{
	t_list	*link;

	link = ft_create_elem(data);
	if ((*begin_list))
		link->next = *begin_list;
	else
		*begin_list = ft_create_elem(data);
	*begin_list = link;
}
