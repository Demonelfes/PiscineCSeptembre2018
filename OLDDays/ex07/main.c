/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:28:54 by allopez           #+#    #+#             */
/*   Updated: 2018/09/05 18:37:38 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str);
void	ft_print_words_tables(char **tab);

int		main(int ac, char **av)
{
	ft_split_whitespaces(av[1]);
	ft_print_words_tables(&av[1]);
}
