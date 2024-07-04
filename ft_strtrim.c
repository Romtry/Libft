/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <rothiery@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:18:24 by rothiery          #+#    #+#             */
/*   Updated: 2024/05/05 10:21:36 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	verif(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*setn(char *s1)
{
	char	*res;

	res = ft_calloc(sizeof(char), ft_strlen(s1) + 1);
	ft_memcpy(res, s1, ft_strlen(s1));
	return (res);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	l2;
	size_t	l1;

	l1 = 0;
	l2 = ft_strlen(s1);
	if (!s1)
		return (NULL);
	if (!set)
		return (setn((char *)s1));
	while (s1[l1] && verif(s1[l1], set) == 1)
		l1++;
	while (l2 > l1 && verif(s1[l2 - 1], set) == 1)
		l2--;
	res = malloc(sizeof(char) * (l2 - l1 + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + l1, l2 - l1 + 1);
	return (res);
}

/*int	main(void)
{
	char	s1[] = "Nothing to trim";
	char	*str;
//	char	*str_;

	str = ft_strtrim(s1, "   ");
//	str_ = ft_strtrim_(s1, " ");
	printf("%s\n", str);
//	printf("%s\n", str_);
//	printf("test\ttest test");
	free(str);
//	free(str_);
	return (0);
}*/
