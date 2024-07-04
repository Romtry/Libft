/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:19:09 by rothiery          #+#    #+#             */
/*   Updated: 2024/04/25 15:58:44 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <unistd.h>

void	*ft_memmove( void *destination, const void *source, size_t size )
{
	unsigned char	*c;
	unsigned char	*d;
	size_t			i;

	i = 0;
	c = (unsigned char *)source;
	d = (unsigned char *)destination;
	if (ft_strlen((const char *)destination) < ft_strlen((const char *)source))
	{
		while (0 < size)
		{
			size--;
			d[size] = c[size];
		}
	}
	else
	{
		while (i != size)
		{
			d[i] = c[i];
			i++;
		}
	}
	return (d);
}

/*#include <string.h>
#include <stdio.h>

#define SIZE    26

int main(void)
{
	char target[SIZE] = "lorem ipsum dolor sit amet";
	char target1[SIZE] = "lorem ipsum dolor sit amet";

	char * p = target + 1;
	char * p1 = target1 + 1;
	memmove( target, p, 8);
	printf( "After memmove, target is \"%s\"\n", target );
	ft_memmove( target1, p1, 8 );
	printf( "After ft_memmove, target becomes \"%s\"\n", target1 );
}*/
