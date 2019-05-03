/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/18 12:56:54 by allopez           #+#    #+#             */
/*   Updated: 2019/04/18 12:56:59 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_create_elem(void *content)
{
	t_list	*link;

	if (!(link = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	link->content = content;
	link->content_size = 0;
	link->next = NULL;
	return (link);
}
