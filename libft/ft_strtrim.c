/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 13:12:57 by allopez           #+#    #+#             */
/*   Updated: 2019/04/11 17:14:37 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	unsigned int	start;
	size_t		len;
	size_t		end_sp;
	char	*new;

	if (!s)
		return (NULL);

	start = 0;
	while (s[start] == '\n' || s[start] == '\t' || s[start] == ' ')
		start++;
	len = (ft_strlen(s));
	while (s[len] == '\n' || s[len] == '\t' || s[len] == ' ')
		len--;
	end_sp = len;

	new = ft_strsub(s, start, (ft_strlen(s) - end_sp));
	return (new);
}

int		main(int ac, char **av)
{
	(void)ac;

	printf("%s", ft_strtrim(av[1]));
}
