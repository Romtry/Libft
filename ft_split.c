/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:33:46 by rothiery          #+#    #+#             */
/*   Updated: 2024/05/08 18:28:15 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	len1(char const *s, char c)
{
	size_t	i;
	size_t	rep;

	rep = 0;
	i = 0;
	if (s[0] != c)
	{
		rep++;
	}
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			rep++;
		}
		i++;
	}
	return (rep);
}

static size_t	len2(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

static char	*chaine(char const *s, size_t x, char c)
{
	char	*res;
	size_t	i;

	i = 0;
	res = malloc(sizeof(char) * len2(s + x, c) + 1);
	if (!res)
		return (0);
	while (i != len2(s + x, c))
	{
		res[i] = s[i + x];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	x;
	size_t	i;

	x = 0;
	i = 0;
	if (!s || !*s)
		return (ft_calloc(sizeof(char *), 1));
	res = malloc(sizeof(char *) * (len1(s, c) + 1));
	if (!res)
		return (NULL);
	while (i != len1(s, c))
	{
		if (s[x] != c)
		{
			res[i] = chaine(s, x, c);
			if (len2(s + x, c) + 1 != '\0')
				x = len2(s + x, c) + 1 + x;
			i++;
		}
		else
			x++;
	}
	res[i] = NULL;
	return (res);
}

/*int	main(void)
{
	char	**tabstr;
	int	i;

	i = 0;
	tabstr = ft_split("testzzzzzzztest2ztest3zzz", 'z');
	while (tabstr[i] != NULL)
	{
		printf("%s\n", tabstr[i]);
		i++;
	}
	free(tabstr);
	return (0);
}*/
