/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 08:45:46 by rothiery          #+#    #+#             */
/*   Updated: 2024/05/05 10:23:49 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	l;

	l = ft_strlen(s);
	i = 0;
	if (!s)
		return (NULL);
	if (start >= l)
		len = 0;
	else if (start + len > l)
		len = l - start;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (0);
	while (i < len)
	{
		str[i] = ((char *)s)[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*int	main(void)
{
	char 	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;

	strsub = ft_substr(str, 0, 10);
	printf("%s\n", strsub);
	free(strsub);
	return (0);
}*/
