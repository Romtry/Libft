/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:25:22 by rothiery          #+#    #+#             */
/*   Updated: 2024/05/06 17:45:09 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*l1;
	t_list	*l2;

	l1 = *lst;
	if (!lst || !del)
		return ;
	while (l1)
	{
		l2 = l1->next;
		ft_lstdelone(l1, del);
		l1 = l2;
	}
	*lst = NULL;
}
