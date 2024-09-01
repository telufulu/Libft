/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:00:42 by telufulu          #+#    #+#             */
/*   Updated: 2024/09/01 20:47:27 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_error(char *err, char *str_error)
{
	ft_putstr_fd(RED, 2);
	ft_putstr_fd("Error: ", 2);
	ft_putstr_fd(DEFAULT, 2);
	if (err && *err)
	{
		ft_putstr_fd(err, 2);
		ft_putstr_fd("\n", 2);
	}
	if (str_error)
	{
		ft_putstr_fd(" - ", 2);
		ft_putstr_fd(str_error, 2);
		ft_putstr_fd("\n", 2);
	}
	exit(EXIT_FAILURE);
}
