/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 13:31:25 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/10 21:57:11 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

typedef unsigned long	t_size;

// Original functions
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
t_size	ft_strlen(const char *s);
void	*ft_memset(void *b, int c, t_size len);
void	ft_bzero(void *s, t_size n);
void	*ft_memcpy(void *dst, const void *src, t_size n);
void	*ft_memmove(void *dst, const void *src, t_size len);
t_size	ft_strlcpy(char *dst, const char *src, t_size dstsize);
t_size	ft_strlcat(char *dst, const char *src, t_size dstsize);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, t_size n);
void	*ft_memchr(const void *s, int c, t_size n);
char	*ft_strnstr(const char *haystack, const char *needle, t_size len);
int		ft_atoi(const char *str);
void	*ft_calloc(t_size count, t_size size);
char	*ft_strdup(const char *s1);
#endif
