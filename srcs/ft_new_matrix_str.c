/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_matrix_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:24:29 by telufulu          #+#    #+#             */
/*   Updated: 2024/10/13 18:37:54 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_new_matrix_str(char **matrix, char *node)
{
	int		i;
	size_t	len;
	char	**res;

	i = 0;
	len = ft_matrix_len(matrix);
	res = ft_calloc(sizeof(char), len + 1);
	if (!res)
		return (NULL);
	while (matrix && matrix[i])
	{
		res[i] = ft_strdup(matrix[i]);
		if (!res[i])
		{
			ft_free_matrix((void **)matrix);
			ft_free_matrix((void **)res);
			return (NULL);
		}
		++i;
	}
	res[i] = ft_strdup(node);
	ft_free_matrix((void **)matrix);
	return (res);
}
