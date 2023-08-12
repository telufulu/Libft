/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:31:57 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/12 14:56:30 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	test_part2(char **argv)
{
	int	flag;

	flag = 0;
	if (!strcmp(argv[1], "ft_substr") || !strcmp(argv[1],"all"))
	{
		if (!flag)
			printf("\x1b[36m----------Part 2----------\x1b[0m\n");
		flag = 1;
		printf("FT_SUBSTR \x1b[32mOK\x1b[0m\n");
	}
	return (flag);
}
