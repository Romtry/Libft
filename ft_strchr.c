/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:00:42 by rothiery          #+#    #+#             */
/*   Updated: 2024/05/06 10:24:24 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	while (c > 256)
	{
		c = c - 256;
	}
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] != c)
	{
		return (NULL);
	}
	else
	{
		str = (char *)s + i;
		return (str);
	}
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str = "tripouille";

	printf("%s\n", strchr(str, 't' + 256));
	printf("%s\n", ft_strchr(str, 't' + 256));
	return (0);
}*/
