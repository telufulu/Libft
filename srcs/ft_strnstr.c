/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:35:57 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/12 14:08:37 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, t_size len)
{
	char	*res;
	char	*aux;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && len)
	{
		aux = (char *)needle;
		res = (char *)haystack;
		while (*haystack == *aux && len--)
		{
			if (*haystack == '\0' && *aux != '\0')
				return (0);
			haystack++;
			aux++;
		}
		if (*aux == '\0')
			return (res);
		haystack++;
		len--;
	}
	return (0);
}
