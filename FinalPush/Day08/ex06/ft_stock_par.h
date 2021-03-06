/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 17:00:41 by allopez           #+#    #+#             */
/*   Updated: 2018/09/10 20:59:26 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H
# include <stdlib.h>

typedef struct		s_stock_par
{
	int				size_param;
	char			*str;
	char			*copy;
	char			**tab;
}					t_stock_par;
char				**ft_split_whitespaces(char *str);
void				ft_show_tab(struct s_stock_par *par);
void				ft_putchar(char c);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);

#endif
