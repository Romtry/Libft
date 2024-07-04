/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:34:43 by rothiery          #+#    #+#             */
/*   Updated: 2024/04/27 19:02:29 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

/*#include <string.h>
#include <bsd/string.h>
#include <stdio.h>

#define SIZE    15

int main(void)
{
	char		target1[SIZE];
	char 		target[SIZE];
	const char	*src = "lorem ipsum dolor sit amet";
	size_t		res;
	size_t		res1;

	memset(target, 0, 15);
	memset(target, 'r', 6);
	memset(target1, 0, 15);
	memset(target1, 'r', 6);
	res1 = ft_strlcpy(target1, src, 0);
	res = strlcpy(target, src, 0);
	printf( "After strlcpy, target becomes \"%zu\"\n", res1);
	printf( "After strlcpy, target becomes \"%s\"\n", target1);
	printf( "After ft_strlcpy, target becomes \"%zu\"\n", res);
	printf( "After ft_strlcpy, target becomes \"%s\"\n", target);
}*/
