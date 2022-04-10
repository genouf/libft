/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: genouf <genouf@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:50:47 by genouf            #+#    #+#             */
/*   Updated: 2022/04/10 09:30:09 by genouf           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*begin_list;

	if (!lst || !f || !del)
		return (0);
	begin_list = 0;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
		{
			ft_lstclear(&begin_list, del);
			return (0);
		}
		ft_lstadd_back(&begin_list, tmp);
		tmp = tmp->next;
		lst = lst->next;
	}
	return (begin_list);
}
