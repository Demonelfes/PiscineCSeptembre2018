/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:16:32 by allopez           #+#    #+#             */
/*   Updated: 2018/09/13 11:52:23 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*link;

	if(!(link = (t_list*)malloc(sizeof (t_list))))
		return (NULL);

	link->next = NULL;
	link->data = data;
	return (link);
}
