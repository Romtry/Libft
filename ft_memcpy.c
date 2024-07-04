/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:59:13 by rothiery          #+#    #+#             */
/*   Updated: 2024/04/24 11:44:22 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>

int	main(void)
{
	char buf[12] = "Hello World";

//	char *buf1 = &(buf[3]);
//	char *buf2 = &(buf[5]);

	ft_memcpy(&(buf[5]), &(buf[3]), 5);
	printf("%s", buf);
}*/
