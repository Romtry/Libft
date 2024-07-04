/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:45:48 by rothiery          #+#    #+#             */
/*   Updated: 2024/05/05 09:39:45 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		rep;
	char	*str;

	i = 0;
	rep = 0;
	while (c > 177)
		c = c -256;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			rep = i;
		i++;
	}
	if (c == '\0')
		rep = i;
	if (s[rep] == c)
	{
		str = (char *)s + rep;
		return (str);
	}
	else
		return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str[] = "bonjour";
	char	str2[] = "bonjour";

	printf("%s\n", strrchr(str, 's'));
	printf("%s\n", ft_strrchr(str2, 's'));
	return (0);
}*/
