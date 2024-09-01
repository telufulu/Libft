/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:43:44 by telufulu          #+#    #+#             */
/*   Updated: 2024/09/01 17:48:18 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_matrix(char **matrix, int fd)
{
	while (matrix && *matrix)
	{
		ft_putstr_fd(*matrix, fd);
		write(1, "\n", 1);
		matrix++;
	}
}
