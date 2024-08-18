/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:57:38 by telufulu          #+#    #+#             */
/*   Updated: 2024/08/18 21:17:20 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	**ft_free_matrix(void **matrix, int i)
{
	if (matrix)
	{
		while (i--)
			free(matrix[i]);
		free(matrix);
	}
	return (NULL);
}
