/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:31:57 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/01 21:16:39 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		if (!strcmp(argv[1], "ft_isalpha") || !strcmp(argv[1],"all"))
		{
			char	a = 'A';
			char	b = 'z';
			char	c = -90;
			
			printf("org: %i\n cpy: %i\n", isalpha(a), ft_isalpha(a));
			printf("org: %i\n cpy: %i\n", isalpha(b), ft_isalpha(b));
			printf("org: %i\n cpy: %i\n", isalpha(c), ft_isalpha(c));
			if (isalpha(a) == ft_isalpha(a) &&
				isalpha(b) == ft_isalpha(b) &&
				isalpha(c) == ft_isalpha(c))
				printf("FT_ISALPHA \x1b[32mOK\x1b[0m\n");
			else	
				printf("FT_ISALPHA \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_isdigit") || !strcmp(argv[1],"all"))
		{
			char	a = '9';
			char	b = -1;
			char	c = 90;
			
			printf("org: %i\n cpy: %i\n", isdigit(a), ft_isdigit(a));
			printf("org: %i\n cpy: %i\n", isdigit(b), ft_isdigit(b));
			printf("org: %i\n cpy: %i\n", isdigit(c), ft_isdigit(c));
			if (isdigit(a) == ft_isdigit(a) &&
				isdigit(b) == ft_isdigit(b) &&
				isdigit(c) == ft_isdigit(c))
				printf("FT_ISDIGIT \x1b[32mOK\x1b[0m\n");
			else	
				printf("FT_ISDIGIT \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_isalnum") || !strcmp(argv[1],"all"))
		{
			char	a = '9';
			char	b = -1;
			char	c = 90;
			
			printf("org: %i\n cpy: %i\n", isalnum(a), ft_isalnum(a));
			printf("org: %i\n cpy: %i\n", isalnum(b), ft_isalnum(b));
			printf("org: %i\n cpy: %i\n", isalnum(c), ft_isalnum(c));
			if (isalnum(a) == ft_isalnum(a) &&
				isalnum(b) == ft_isalnum(b) &&
				isalnum(c) == ft_isalnum(c))
				printf("FT_ISALNUM \x1b[32mOK\x1b[0m\n");
			else	
				printf("FT_ISALNUM \x1b[31mKO\x1b[0m\n");
		}
	}
	else
		printf("\x1b[31merror: \x1b[0m empty argument\n");
	return (0);
}
