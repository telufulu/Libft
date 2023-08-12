/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:31:57 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/12 14:59:21 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	test_part1(char **argv);
int	test_part2(char **argv);
int	test_bonus(char **argv);

int	main(int argc, char **argv)
{
	int	flag;

	flag = 0;
	if (argc == 2)
	{
		flag += test_part1(argv);
		flag += test_part2(argv);
		flag += test_bonus(argv);
		if (!flag)
		{
			printf("\x1b[31merror:\x1b[0m unknown argument\n");
			return (-1);
		}
	}
	else
	{
		printf("\x1b[31merror:\x1b[0m empty argument\n");
		return (-1);
	}
	return (0);
}
