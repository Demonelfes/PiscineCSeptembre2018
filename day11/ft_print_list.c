/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:50:15 by allopez           #+#    #+#             */
/*   Updated: 2018/09/13 15:06:35 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_print_list(t_list *list)
{
	if (list)
		printf("%d", list->data);
	if (list->next)
		ft_print_list(list->next);
}

int		main(void)
{
	t_list	*list;

	list = NULL;

	list = ft_create_elem (15);
	ft_list_push_back(&list, 42);
	ft_list_push_back(&list, 10);
	ft_print_list(list);
}
