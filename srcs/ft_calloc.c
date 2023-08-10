/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 21:34:10 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/10 21:36:45 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(t_size count, t_size size)
{
	void	*aux;
	t_size	len;

	len = count * size;
	aux = malloc(len);
	if (!aux)
		return (0);
	ft_bzero(aux, len);
	return (aux);
}
