/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 03:15:35 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/06 16:17:00 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	int	i;

	i = 0;
	while (size > 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	if (size > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
