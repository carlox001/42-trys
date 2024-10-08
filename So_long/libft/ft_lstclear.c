/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: czerini <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 12:42:26 by czerini           #+#    #+#             */
/*   Updated: 2023/10/22 12:42:28 by czerini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (del == NULL)
		return ;
	while (*lst != NULL)
	{
		current = *lst;
		*lst = (*lst)->next;
		(*del)(current->content);
		free(current);
	}
}
