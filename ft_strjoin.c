/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:45:28 by rothiery          #+#    #+#             */
/*   Updated: 2024/05/06 10:08:17 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	s1l;

	s1l = ft_strlen(s1);
	i = 0;
	dest = malloc(sizeof(char) * (s1l + ft_strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);
	while (i < s1l)
	{
		dest[i] = s1[i];
		i++;
	}
	while (i < (s1l + ft_strlen(s2)))
	{
		dest[i] = s2[i - s1l];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	printf("%s\n", ft_strjoin("nanachi", "is cool"));
	return (0);
}*/
