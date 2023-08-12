/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:31:57 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/12 15:00:19 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	test_bonus(char **argv)
{
	int	flag;

	flag = 0;
	//if (!strcmp(argv[1], "HOLITA") || !strcmp(argv[1],"all"))
	if (!strcmp(argv[1], "HOLITA"))
	{
		if (!flag)
			printf("\x1b[36m-----------Bonus-----------\x1b[0m\n");
		flag = 1;
	}
	return (flag);
}
