/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:57:38 by telufulu          #+#    #+#             */
/*   Updated: 2024/09/01 17:59:58 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// It's necesary to cast the variable matrix at the call of the function.

void	**ft_free_matrix(void **matrix)
{
	int	i;

	i = -1;
	while (matrix && matrix[++i])
	{
		free(matrix[i]);
		matrix[i] = NULL;
	}
	if (matrix)
	{
		free(matrix);
		matrix = NULL;
	}
	return (NULL);
}
