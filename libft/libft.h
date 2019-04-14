/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allopez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 14:00:02 by allopez           #+#    #+#             */
/*   Updated: 2019/04/12 17:40:28 by allopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar(char c);
void	ft_putstr(const char *str);
void	ft_bzero(void *s, size_t n);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
void	*ft_memalloc(size_t size);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putendl(char const *s);
void	ft_putnbr(int nb);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t nb);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char 	*ft_strstr(const char *str, const char *to_find);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strnew(size_t size);
char	*ft_strdup(const char *src);
char 	*ft_strmap(const char *s, char (*f)(char));
char 	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strsub(const char *s, unsigned int start, size_t len);
char 	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s);
char	*ft_itoa(int n);
char	*strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
char	**ft_strsplit(const char *s, char c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t size);
int		ft_strequ(const char *s1, const char *s2);
int     ft_strnequ(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *str);

#endif
