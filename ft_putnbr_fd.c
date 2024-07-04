/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:55:27 by rothiery          #+#    #+#             */
/*   Updated: 2024/05/03 16:13:06 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	x;

	if (n == 1 << 31)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n = n * -1;
			write(fd, "-", 1);
		}
		if (n < 10)
		{
			n = n + '0';
			write(fd, &n, 1);
		}
		else
		{
			ft_putnbr_fd(n / 10, fd);
			x = (n % 10) + '0';
			write(fd, &x, 1);
		}
	}
}

/*int	main(void)
{
	ft_putnbr_fd(-2147483648LL, 1);
}*/
