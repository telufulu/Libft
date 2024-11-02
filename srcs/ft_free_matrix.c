/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_matrix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:57:38 by telufulu          #+#    #+#             */
/*   Updated: 2024/11/02 00:13:33 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_free_matrix(char **matrix)
{
	int	i;

	i = -1;
	while (matrix && matrix[++i])
	{
		free(matrix[i]);
		matrix[i] = NULL;
	}
	if (matrix)
		free(matrix);
	return (NULL);
}
