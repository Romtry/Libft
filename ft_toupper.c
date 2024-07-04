/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 19:44:05 by rothiery          #+#    #+#             */
/*   Updated: 2024/04/27 18:53:09 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c < 'a' || c > 'z')
		return (c);
	else
		return (c - 32);
}

/*#include <unistd.h>

int	main(void)
{
	char	c;
	int	i;

	i = 58;
	while (i <= 64)
	{
		c = ft_toupper(i);
		write(1, &c, 1);
		i++;
	}
	return (0);
}*/
