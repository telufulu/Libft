/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:31:57 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/13 14:24:07 by telufulu         ###   ########.fr       */
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

		// Sólo debe fallar en caso de que s = 0
		char	*res = 0;
		char	s[] = "lorem ipsum dolor sit amet";
		char	*expected_res = " ipsum dol"; // probar con Mundo!(6) \0(11)
		int		start = 5; // con "Hola Mundo!" y len de 12 debe devolver null
		int		len = 10;

		res = ft_substr(s, start, len);
		printf("res: %s\n", res);
		if ((res == NULL && expected_res == NULL) || !strcmp(res, expected_res))
			printf("FT_SUBSTR \x1b[32mOK\x1b[0m\n");
		else
			printf("FT_SUBSTR \x1b[31mKO\x1b[0m\n");
		free(res);
	}
	return (flag);
}
