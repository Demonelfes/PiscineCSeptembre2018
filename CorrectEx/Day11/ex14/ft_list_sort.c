/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 14:01:30 by allopez           #+#    #+#             */
/*   Updated: 2018/09/17 17:04:51 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp;
	t_list	*tmp1;
	t_list	*tmp2;
	void	*min;

	tmp = *begin_list;
	while (tmp)
	{
		tmp2 = tmp;
		min = tmp->data;
		tmp1 = tmp->next;
		while (tmp1)
		{
			if ((*cmp)(min, tmp1->data) > 0)
			{
				tmp2 = tmp1;
				min = tmp2->data;
			}
			tmp1 = tmp1->next;
		}
		tmp2->data = tmp->data;
		tmp->data = min;
		tmp = tmp->next;
	}
}
