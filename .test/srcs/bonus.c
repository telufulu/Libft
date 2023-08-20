/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:31:57 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/20 15:07:36 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	test_bonus(int argc, char **argv)
{
	int	flag;

	flag = 0;
	if (!strcmp(argv[argc - 1], "ft_lstnew") || !strcmp(argv[argc - 1], "all") || !strcmp(argv[1], "bonus"))
	{
		if (!flag)
			printf("\x1b[36m-----------Bonus-----------\x1b[0m\n");
		flag = 1;

		t_list	*res;
		char	*content = "";

		res = ft_lstnew(content);
		printf("res: %s\n", (char *)res->content);
		if (!strcmp((char *)res->content, content) && res->next == 0)
			printf("FT_LSTNEW \x1b[32mOK\x1b[0m\n");
		else
			printf("FT_LSTNEW \x1b[31mKO\x1b[0m\n");
	}
	return (flag);
}
