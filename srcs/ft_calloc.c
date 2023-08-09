/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 21:34:10 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/09 21:47:27 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size count, t_size size)
{
	char	*aux;
	t_size	len;

	aux = malloc(count * size);
	if (!aux)
		return (0);
	len = count * size;
	while (len)
		aux[len--] = '\0';
	return ((void *)aux);
}
