/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:31:57 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/01 23:06:01 by telufulu         ###   ########.fr       */
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
			
			printf("org: %i cpy: %i\n", isalpha(a), ft_isalpha(a));
			printf("org: %i cpy: %i\n", isalpha(b), ft_isalpha(b));
			printf("org: %i cpy: %i\n", isalpha(c), ft_isalpha(c));
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
			
			printf("org: %i cpy: %i\n", isdigit(a), ft_isdigit(a));
			printf("org: %i cpy: %i\n", isdigit(b), ft_isdigit(b));
			printf("org: %i cpy: %i\n", isdigit(c), ft_isdigit(c));
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
			
			printf("org: %i cpy: %i\n", isalnum(a), ft_isalnum(a));
			printf("org: %i cpy: %i\n", isalnum(b), ft_isalnum(b));
			printf("org: %i cpy: %i\n", isalnum(c), ft_isalnum(c));
			if (isalnum(a) == ft_isalnum(a) &&
				isalnum(b) == ft_isalnum(b) &&
				isalnum(c) == ft_isalnum(c))
				printf("FT_ISALNUM \x1b[32mOK\x1b[0m\n");
			else	
				printf("FT_ISALNUM \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_isascii") || !strcmp(argv[1],"all"))
		{
			char	a = '9';
			char	b = -1;
			char	c = 127;
			
			printf("org: %i cpy: %i\n", isascii(a), ft_isascii(a));
			printf("org: %i cpy: %i\n", isascii(b), ft_isascii(b));
			printf("org: %i cpy: %i\n", isascii(c), ft_isascii(c));
			if (isascii(a) == ft_isascii(a) &&
				isascii(b) == ft_isascii(b) &&
				isascii(c) == ft_isascii(c))
				printf("FT_ISASCII \x1b[32mOK\x1b[0m\n");
			else	
				printf("FT_ISALNUM \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_isprint") || !strcmp(argv[1],"all"))
		{
			char	a = '9';
			char	b = -1;
			char	c = 127;
			
			printf("org: %i cpy: %i\n", isprint(a), ft_isprint(a));
			printf("org: %i cpy: %i\n", isprint(b), ft_isprint(b));
			printf("org: %i cpy: %i\n", isprint(c), ft_isprint(c));
			if (isprint(a) == ft_isprint(a) &&
				isprint(b) == ft_isprint(b) &&
				isprint(c) == ft_isprint(c))
				printf("FT_ISPRINT \x1b[32mOK\x1b[0m\n");
			else	
				printf("FT_ISPRINT \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_strlen") || !strcmp(argv[1],"all"))
		{
			char	*s1 = "Hola Mundo!\n";
			char	*s2 = "";
			char	*s3 = "After all this time?";

			printf("org: %lu cpy: %lu\n", strlen(s1), ft_strlen(s1));
			printf("org: %lu cpy: %lu\n", strlen(s2), ft_strlen(s2));
			printf("org: %lu cpy: %lu\n", strlen(s3), ft_strlen(s3));
			if (strlen(s1) == ft_strlen(s1) &&
				strlen(s2) == ft_strlen(s2) &&
				strlen(s3) == ft_strlen(s3))
				printf("FT_STRLEN \x1b[32mOK\x1b[0m\n");
			else	
				printf("FT_STRLEN \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_memset") || !strcmp(argv[1],"all"))
		{
			char	s1[] = "After all this time?\n";
			char	s2[] = "After all this time?\n";
			char	c = -42;
			int		len = 21;

			printf("org: %s\ncpy: %s\n", (char *)memset(s1, c, len), (char *)ft_memset(s2, c, len));
			if (!strcmp(s1, s2))
				printf("FT_MEMSET \x1b[32mOK\x1b[0m\n");
			else	
				printf("FT_MEMSET \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_bzero") || !strcmp(argv[1],"all"))
		{
			char	s1[] = "After all this time?\n";
			char	s2[] = "After all this time?\n";
			int		len = 22;

			bzero(s1, len);
			ft_bzero(s2, len);
			printf("org: %s\ncpy: %s\n", s1, s2);
			if (!strcmp(s1, s2))
				printf("FT_BZERO \x1b[32mOK\x1b[0m\n");
			else	
				printf("FT_BZERO \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_memcpy") || !strcmp(argv[1],"all"))
		{
			char	s1[] = "After all this time?";
			char	s1a[] = "Always";
			char	s2[] = "After all this time?";
			char	s2a[] = "Always";
			int		len = 1;

			memcpy(s1, s1a, len);
			ft_memcpy(s2, s2a, len);
			printf("org: %s\ncpy: %s\n", s1, s2);
			if (!strcmp(s1, s2))
				printf("FT_MEMCPY \x1b[32mOK\x1b[0m\n");
			else	
				printf("FT_MEMCPY \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_memmove") || !strcmp(argv[1],"all"))
		{
			char	s1[] = "After all this time?\n";
			char	s1a[] = "Always";
			char	s2[] = "After all this time?\n";
			char	s2a[] = "Always";
			int		len = 22;

			memmove(s1, s1a, len);
			ft_memmove(s2, s2a, len);
			printf("org: %s\ncpy: %s\n", s1, s2);
			if (!strcmp(s1, s2) && !strcmp(s1a, s2a))
				printf("FT_MEMMOVE \x1b[32mOK\x1b[0m\n");
			else	
				printf("FT_MEMMOVE \x1b[31mKO\x1b[0m\n");
		}
	}
	else
		printf("\x1b[31merror: \x1b[0m empty argument\n");
	return (0);
}
