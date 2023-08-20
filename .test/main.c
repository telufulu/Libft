/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:31:57 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/20 17:07:02 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	test_part1(int argc, char **argv);
int	test_part2(int argc, char **argv);
int	test_bonus(int argc, char **argv);

int	main(int argc, char **argv)
{
	int	flag;

	flag = 0;
	if (argc == 2)
	{
		if (!strcmp(argv[1], "part1"))
			flag += test_part1(argc, argv);
		else if (!strcmp(argv[1], "part2"))
			flag += test_part2(argc, argv);
		else if (!strcmp(argv[1], "bonus"))
			flag += test_bonus(argc, argv);
		else
		{	
			flag += test_part1(argc, argv);
			flag += test_part2(argc, argv);
			flag += test_bonus(argc, argv);
		}
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
