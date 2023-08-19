/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   part1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:31:57 by telufulu          #+#    #+#             */
/*   Updated: 2023/08/19 15:05:45 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int	test_part1(char **argv)
{
	int	flag = 0;
		if (!strcmp(argv[1], "ft_isalpha") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
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
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
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
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
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
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
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
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
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
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
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
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
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
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
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
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			char	s1a[] = "Always";
			char	s1[50] = "Mundo";
			char	s2a[] = "Always";
			char	s2[50] = "Mundo";
			int		len = 2;

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
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			char	s1a[] = "Always";
			char	s1[50] = "Mundo";
			char	s2a[] = "Always";
			char	s2[50] = "Mundo";
			int		len = 2;

			memmove(s1, s1a, len);
			ft_memmove(s2, s2a, len);
			printf("org: %s\ncpy: %s\n", s1, s2);
			if (!strcmp(s1, s2) && !strcmp(s1a, s2a))
				printf("FT_MEMMOVE \x1b[32mOK\x1b[0m\n");
			else	
				printf("FT_MEMMOVE \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_strlcpy") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			char	s1[] = "After all this time?\n";
			char	s1a[] = "Always";
			char	s2[] = "After all this time?\n";
			char	s2a[] = "Always";
			int		len = 10;

			if (strlcpy(s1, s1a, len) == ft_strlcpy(s2, s2a, len) &&
				!strcmp(s1, s2))
			{
				printf("org: %s\ncpy: %s\n", s1, s2);
				printf("FT_STRLCPY \x1b[32mOK\x1b[0m\n");
			}
			else	
				printf("FT_STRLCPY \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_strlcat") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			char	s1[50] = "After all this time?";
			char	s1a[] = " Always\n";
			char	s2[50] = "After all this time?";
			char	s2a[] = " Always\n";
			int		len = 28;

			if (strlcat(s1, s1a, len) == ft_strlcat(s2, s2a, len) &&
				!strcmp(s1, s2))
			{
				printf("org: %s\ncpy: %s\n", s1, s2);
				printf("FT_STRLCAT \x1b[32mOK\x1b[0m\n");
			}
			else
				printf("FT_STRLCAT \x1b[31mKO\x1b[0m\n");
		}
		int	a1 = 'd';
		int	a2 = 'd';
		int	b1 = '@';
		int	b2 = '@';
		if (!strcmp(argv[1], "ft_toupper") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			a1 = toupper(a1);
			a2 = ft_toupper(a2);
			b1 = toupper(b1);
			b2 = ft_toupper(b2);
			printf("org: %c\ncpy: %c\n", a1, a2);
			printf("org: %c\ncpy: %c\n", b1, b2);
			if (a1 == a2 && b1 == b2)
				printf("FT_TOUPPER \x1b[32mOK\x1b[0m\n");
			else
				printf("FT_TOUPPER \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_tolower") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			a1 = tolower(a1);
			a2 = ft_tolower(a2);
			b1 = tolower(b1);
			b2 = ft_tolower(b2);
			printf("org: %c\ncpy: %c\n", a1, a2);
			printf("org: %c\ncpy: %c\n", b1, b2);
			if (a1 == a2 && b1 == b2)
				printf("FT_TOLOWER \x1b[32mOK\x1b[0m\n");
			else
				printf("FT_TOLOWER \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_strchr") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			char	*str = "\0"; //try "\0" "Hola Mundo!"
			int		c = '\0'; //try 'x' and '\0'

			printf("org: %s\ncpy: %s\n", strchr(str, c), ft_strchr(str, c));
			if (strchr(str, c) == ft_strchr(str, c) ||
				!strcmp(strchr(str, c), ft_strchr(str, c)))
				printf("FT_STRCHR \x1b[32mOK\x1b[0m\n");
			else
				printf("FT_STRCHR \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_strrchr") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			char	*str = "Hola Mundo!";
			int		c = 'H'; //try 'x' and '\0'

			printf("org: %s\ncpy: %s\n", strrchr(str, c), ft_strrchr(str, c));
			if (strrchr(str, c) == ft_strrchr(str, c) ||
				!strcmp(strrchr(str, c), ft_strrchr(str, c)))
				printf("FT_STRRCHR \x1b[32mOK\x1b[0m\n");
			else
				printf("FT_STRRCHR \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_strncmp") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			char	s1[] = "Hola mundo! ";
			char	s2[] = "Hola mundo!";
			size_t	len = 10;

			printf("org: %i\ncpy: %i\n", strncmp(s1, s2, len), ft_strncmp(s1, s2, len));
			if (strncmp(s1, s2, len) == ft_strncmp(s1, s2, len))
				printf("FT_STRNCMP \x1b[32mOK\x1b[0m\n");
			else
				printf("FT_STRNCMP \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_memchr") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			void	*str = "Hola Mundo!";
			int		c = '\0'; //try 'x' and '\0'
			size_t	len = 1;

			printf("org: %s\ncpy: %s\n", (char *)memchr(str, c, len), (char *)ft_memchr(str, c, len));
			if (memchr(str, c, len) == ft_memchr(str, c, len) ||
				!strcmp(memchr(str, c, len), ft_memchr(str, c, len)))
				printf("FT_MEMCHR \x1b[32mOK\x1b[0m\n");
			else
				printf("FT_MEMCHR \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_memcmp") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			char	s1[] = "Hola mundo! ";
			char	s2[] = "Hola mundo!";
			size_t	len = 0;

			printf("org: %i\ncpy: %i\n", memcmp(s1, s2, len), ft_memcmp(s1, s2, len));
			if (memcmp(s1, s2, len) == ft_memcmp(s1, s2, len))
				printf("FT_MEMCMP \x1b[32mOK\x1b[0m\n");
			else
				printf("FT_MEMCMP \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_strnstr") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			char	*str = "aaabcabcd"; // Hola Mundo! aaabcabcd
			char	*c = "abcd"; //try 'x', '!', "aabc"  and '\0'
			size_t	len = -1; //try 11 and 10 with c = "Mundo!"
							// try 0 or -1 with c = "!"

			printf("org: %s\ncpy: %s\n", strnstr(str, c, len), ft_strnstr(str, c, len));
			if (strnstr(str, c, len) == ft_strnstr(str, c, len) ||
				!strcmp(strnstr(str, c, len), ft_strnstr(str, c, len)))
				printf("FT_STRNSTR \x1b[32mOK\x1b[0m\n");
			else
				printf("FT_STRNSTR \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_atoi") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			// Try with -42, 0, +0, -0, 2147483647, -2147483648, +2147483648
			char	*s1 = "\13\12\11\10 -214748364999asdas42";

			printf("org: %i\ncpy: %i\n", atoi(s1), ft_atoi(s1));
			if (atoi(s1) == ft_atoi(s1))
				printf("FT_ATOI \x1b[32mOK\x1b[0m\n");
			else
				printf("FT_ATOI \x1b[31mKO\x1b[0m\n");
		}
		if (!strcmp(argv[1], "ft_calloc") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			char	*s1;
			char	*s2;
			int		len = 30;

			s1 = calloc(sizeof(char), len);
			s2 = ft_calloc(sizeof(char), len);
			printf("org: %lu\ncpy: %lu\n", strlen(s1), strlen(s2));
			if (strlen(s1) == strlen(s2))
				printf("FT_CALLOC \x1b[32mOK\x1b[0m\n");
			else
				printf("FT_CALLOC \x1b[31mKO\x1b[0m\n");
			free(s1);
			free(s2);
		}
		if (!strcmp(argv[1], "ft_strdup") || !strcmp(argv[1],"all"))
		{
			if (!flag)
				printf("\x1b[36m----------Part 1----------\x1b[0m\n");
			flag = 1;
			char	*org = "After all this time?\n\tAlways...";
			char	*s1;
			char	*s2;

			s1 = strdup(org);
			s2 = ft_strdup(org);
			printf("org: %s\ncpy: %s\n", s1, s2);
			if (!strcmp(s1, s2))
				printf("FT_STRDUP \x1b[32mOK\x1b[0m\n");
			else
				printf("FT_STRDUP \x1b[31mKO\x1b[0m\n");
			free(s1);
			free(s2);
		}
	return (flag);
}
