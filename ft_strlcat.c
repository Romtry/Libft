/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 08:51:06 by rothiery          #+#    #+#             */
/*   Updated: 2024/04/27 19:01:28 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dstl;
	size_t	srcl;

	srcl = ft_strlen(src);
	dstl = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && i + dstl < (size - 1) && i + dstl < (size))
	{
		dst[i + dstl] = src[i];
		i++;
	}
	if (i == size)
		return (srcl);
	else if (srcl == 0)
		return (dstl);
	else if (dstl == size || dstl == size - 1)
		return (srcl + dstl);
	else if (i == 0)
		return (srcl + size);
	dst[i + dstl] = '\0';
	return (dstl + srcl);
}

/*#include <string.h>
#include <bsd/string.h>
#include <stdio.h>

#define SIZE	15

int	main(void)
{
	char		*target1;
	char		*target;
	const char	*src = "lorem ipsum";
	const char	*src1 = "lorem ipsum";
	size_t		res;
	size_t		res1;

	target = malloc (sizeof(char) * SIZE);
	target1 = malloc (sizeof(char) * SIZE);
	memset(target, 0, 15);
	memset(target, 'r', 6);
	memset(target1, 0, 15);
	memset(target1, 'r', 6);
//	memset(target, 'r', 14);
//	memset(target1, 'r', 14);
	target[0] = '\0';
	target1[0] = '\0';
	target[11] = 'a';
	target1[11] = 'a';
	res = strlcat(target, src, 15);
	res1 = ft_strlcat(target1, src1, 15);
	printf( "After strlcat, res becomes \"%zu\"\n", res);
	printf( "After strlcat, target becomes \"%s\"\n", target);
	printf( "After ft_strlcat, res becomes \"%zu\"\n", res1);
	printf( "After ft_strlcat, target becomes \"%s\"\n", target1);
	free(target);
	free(target1);
}*/
