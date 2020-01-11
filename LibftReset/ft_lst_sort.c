/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 16:03:28 by allopez           #+#    #+#             */
/*   Updated: 2020/01/11 16:03:31 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp;
	t_list	*tmp1;
	t_list	*tmp2;
	void	*min;

	tmp = *begin_list;
	while (tmp)
	{
		tmp2 = tmp;
		min = tmp->content;
		tmp1 = tmp->next;
		while (tmp1)
		{
			if ((*cmp)(min, tmp1->content) > 0)
			{
				tmp2 = tmp1;
				min = tmp2->content;
			}
			tmp1 = tmp1->next;
		}
		tmp2->content = tmp->content;
		tmp->content = min;
		tmp = tmp->next;
	}
}
