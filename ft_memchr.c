/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:05:39 by rothiery          #+#    #+#             */
/*   Updated: 2024/05/04 14:25:28 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && ((const char *)s)[i] != (char)c)
		i++;
	if (((const char *)s)[i] == (char)c)
		return ((void *)s + i);
	else
		return (0);
}

/*int	main(void)
{
	int tab[7] = {-49, 49, 1, -1, 0, -2, 2};

	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
	return (0);
}*/
