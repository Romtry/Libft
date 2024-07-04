/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 21:30:32 by rothiery          #+#    #+#             */
/*   Updated: 2024/04/28 13:13:00 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i + 1 < n)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*#include <string.h>

int	main(void)
{
	printf("rep = %d\n", strncmp("test\200", "test\0", 6));
	printf("rep = %d\n", ft_strncmp("test\200", "test\0", 6));
	return (0);
}*/
