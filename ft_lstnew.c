/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 09:47:19 by rothiery          #+#    #+#             */
/*   Updated: 2024/05/06 10:46:12 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tab;

	tab = NULL;
	tab = malloc(sizeof(t_list));
	if (tab)
	{
		tab->content = content;
		tab->next = NULL;
	}
	return (tab);
}
