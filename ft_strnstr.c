/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:39:51 by rothiery          #+#    #+#             */
/*   Updated: 2024/05/03 14:31:03 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i1;

	i = 0;
	i1 = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (big[i] == little[i1])
		{
			while (big[i + i1] == little[i1] && i + i1 < len)
			{
				i1++;
				if (little[i1] == '\0')
					return ((char *)big + i);
			}
			i1 = 0;
		}
		i++;
	}
	return (0);
}

/*int	main(void)
{
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	return (0);
}*/
