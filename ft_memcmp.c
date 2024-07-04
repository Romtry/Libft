/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:10:57 by rothiery          #+#    #+#             */
/*   Updated: 2024/05/04 14:26:01 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	*str1;

	str = (unsigned char *)s1;
	str1 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i + 1 < n && str[i] == str1[i])
		i++;
	return (str[i] - str1[i]);
}

/*int	main(void)
{
//	char	*t1;
//	char	*t2;
	char s2[] = {-49, 49, 1, -1, 0, -2, 2};
//	char s3[] = {0, 0, 4, 0};

//	t1 = s2 + 4;
//	t2 = s3 + 4;
	printf("%d\n", ft_memcmp(s2, -1, 7));
	return (0);
}*/
