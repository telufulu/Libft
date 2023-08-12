/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:19:17 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/12 14:17:22 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*aux;

	aux = (char *)s;
	while (*aux && n--)
	{
		if (*aux == (char)c)
			return ((void *)aux);
		aux++;
	}
	return (0);
}
