/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   concatenate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: telufulu <telufulu@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 23:36:03 by telufulu          #+#    #+#             */
/*   Updated: 2024/06/03 21:05:11 by telufulu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// This function, concatenates two strings making enough space for them with
// malloc. s1 is preallocated and s2 is not allocated. The functiond return 
// the mix of s1 and s2.

char	*concatenate(char *s1, char *s2)
{
	char	*res;

	res = NULL;
	if (!s1)
		return (ft_strdup(s2));
	else if (s2)
	{
		res = ft_strjoin(s1, s2);
		if (!res)
			return (NULL);
	}
	return (res);
}
