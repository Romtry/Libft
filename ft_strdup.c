/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:06:35 by rothiery          #+#    #+#             */
/*   Updated: 2024/04/29 09:50:34 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (i - 1 != (int)ft_strlen(s))
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	s[] = "lorem ipsum dolor sit amet";
	char	*str;

	str = ft_strdup(s);
	printf("%s\n", str);
	free (str);
	return (0);
}*/
