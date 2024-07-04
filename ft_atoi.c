/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 14:25:02 by rothiery          #+#    #+#             */
/*   Updated: 2024/05/04 14:47:56 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	atoirep(const char *nptr, int i)
{
	int	rep;

	rep = 0;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		rep = (rep * 10) + (nptr[i] - 48);
		i++;
	}
	return (rep);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	s;

	s = 1;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '-')
	{
		s = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	if (nptr[i] < '0' || nptr[i] > '9')
		return (0);
	else
		return (atoirep(nptr, i) * s);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi("0"));
	return (0);
}*/
