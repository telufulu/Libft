/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:31:57 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/20 21:44:23 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
			printf("\x1b[36m-------------Bonus--------------\x1b[0m\n");
		flag = 1;

		t_list	*res;
		char	*content = "42";

		res = ft_lstnew(content);
		printf("res: %s\n", (char *)res->content);
		if (!content && !res->content && res->next == 0)
			printf("FT_LSTNEW \x1b[32mOK\x1b[0m\n");
		else if (!strcmp((char *)res->content, content) && res->next == 0)
			printf("FT_LSTNEW \x1b[32mOK\x1b[0m\n");
		else
			flag += printf("FT_LSTNEW \x1b[31mKO\x1b[0m\n");
		free(res);
	}
	if (!strcmp(argv[argc - 1], "ft_lstadd_front") || !strcmp(argv[argc - 1], "all") || !strcmp(argv[1], "bonus"))
	{
		if (!flag)
			printf("\x1b[36m-------------Bonus--------------\x1b[0m\n");
		flag = 1;

		t_list	*res;
		t_list	*aux;
		char	*content = "Always";
		char	*content2 = "After all this time?";

		res = ft_lstnew(content);
		aux = ft_lstnew(content2);
		ft_lstadd_front(&res, aux);
		printf("%s\n%s\n", (char *)res->content, (char *)(res->next)->content);
		if (!strcmp(res->content, content2) && !strcmp((res->next)->content, content))
			printf("FT_LSTADD_FRONT \x1b[32mOK\x1b[0m\n");
		else
			flag += printf("FT_LSTADD_FRONT \x1b[31mKO\x1b[0m\n");
		free(res->next);
		free(res);
	}
	return (flag);
}
