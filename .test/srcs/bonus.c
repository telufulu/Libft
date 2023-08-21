/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:31:57 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/21 13:30:51 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static void	zero_auxiliar(void *s)
{
	char	*aux;

	aux = s;
	while (*aux != '\0')
		*aux++ = 0;
}

int	test_bonus(int argc, char **argv)
{
	int	flag;

	flag = 0;
	if (!strcmp(argv[argc - 1], "ft_lstnew") || !strcmp(argv[argc - 1], "all") || !strcmp(argv[1], "bonus"))
	{
		if (!flag)
		{
			printf("\x1b[36m-------------Bonus--------------\x1b[0m\n");
			flag = 1;
		}
		
		t_list	*res;
		char	*content = "42";

		res = ft_lstnew(content);
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
		{
			printf("\x1b[36m-------------Bonus--------------\x1b[0m\n");
			flag = 1;
		}
		
		t_list	*res;
		t_list	*aux;
		char	*content = "Always";
		char	*content2 = "After all this time?";

		res = ft_lstnew(content);
		aux = ft_lstnew(content2);
		ft_lstadd_front(&res, aux);
		if (!strcmp(res->content, content2) && !strcmp((res->next)->content, content))
			printf("FT_LSTADD_FRONT \x1b[32mOK\x1b[0m\n");
		else
			flag += printf("FT_LSTADD_FRONT \x1b[31mKO\x1b[0m\n");
		free(res->next);
		free(res);
	}
	if (!strcmp(argv[argc - 1], "ft_lstsize") || !strcmp(argv[argc - 1], "all") || !strcmp(argv[1], "bonus"))
	{
		if (!flag)
		{
			printf("\x1b[36m-------------Bonus--------------\x1b[0m\n");
			flag = 1;
		}
		
		t_list	*res;
		t_list	*aux;
		char	*content = "Always";
		char	*content2 = "After all this time?";
		int		size;

		res = ft_lstnew(content);
		aux = ft_lstnew(content2);
		ft_lstadd_front(&res, aux);
		size = ft_lstsize(res);
		if (size == 2)
			printf("FT_LSTSIZE \x1b[32mOK\x1b[0m\n");
		else
			flag += printf("FT_LSTSIZE \x1b[31mKO\x1b[0m\n");
		free(res->next);
		free(res);
	}
	if (!strcmp(argv[argc - 1], "ft_lstlast") || !strcmp(argv[argc - 1], "all") || !strcmp(argv[1], "bonus"))
	{
		if (!flag)
		{
			printf("\x1b[36m-------------Bonus--------------\x1b[0m\n");
			flag = 1;
		}
		
		t_list	*res;
		t_list	*aux;
		t_list	*aux2;
		char	*content = "Always";
		char	*content2 = "After all this time?";

		res = ft_lstnew(content);
		aux = ft_lstnew(content2);
		ft_lstadd_front(&res, aux);
		aux2 = ft_lstlast(res); // try with 0 instead res
		if (!strcmp(aux2->content, content) && !aux2->next)
			printf("FT_LSTLAST \x1b[32mOK\x1b[0m\n");
		else
			flag += printf("FT_LSTLAST \x1b[31mKO\x1b[0m\n");
		free(res->next);
		free(res);
	}
	if (!strcmp(argv[argc - 1], "ft_lstadd_back") || !strcmp(argv[argc - 1], "all") || !strcmp(argv[1], "bonus"))
	{
		if (!flag)
		{
			printf("\x1b[36m-------------Bonus--------------\x1b[0m\n");
			flag = 1;
		}
		
		t_list	*res;
		t_list	*aux;
		char	*content = "After all this time?";
		char	*content2 = "Always";

		res = ft_lstnew(content);
		aux = ft_lstnew(content2);
		ft_lstadd_back(&res, aux);
		if (!strcmp(res->content, content) && !strcmp((res->next)->content, content2) && !aux->next)
			printf("FT_LSTADD_BACK \x1b[32mOK\x1b[0m\n");
		else
			flag += printf("FT_LSTADD_BACK \x1b[31mKO\x1b[0m\n");
		free(res->next);
		free(res);
	}
	if (!strcmp(argv[argc - 1], "ft_lstdelone") || !strcmp(argv[argc - 1], "all") || !strcmp(argv[1], "bonus"))
	{
		if (!flag)
		{
			printf("\x1b[36m-------------Bonus--------------\x1b[0m\n");
			flag = 1;
		}
		
		t_list	*res;
		char	content[] = "After all this time?";

		res = ft_lstnew(content);
		ft_lstdelone(res, &zero_auxiliar);
		if (res->content)
			printf("FT_LSTDELONE \x1b[32mOK\x1b[0m\n");
		else
			flag += printf("FT_LSTDELONE \x1b[31mKO\x1b[0m\n");
	}
	return (flag);
}
