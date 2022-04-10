/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:33:12 by genouf            #+#    #+#             */
/*   Updated: 2022/04/10 09:29:32 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;

	if (!lst || !del)
		return ;
	current = *lst;
	while (*lst)
	{
		*lst = (*lst)->next;
		ft_lstdelone(current, del);
		current = *lst;
	}
	*lst = NULL;
}
