/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/25 19:06:39 by abellion          #+#    #+#             */
/*   Updated: 2015/03/06 16:56:48 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list		*ft_lstpop(t_list *lst, t_list *elem)
{
	t_list		*prev;
	t_list		*tmp;
	t_list		*begin;

	prev = NULL;
	begin = lst;
	while (lst && lst != elem)
	{
		prev = lst;
		lst = lst->next;
	}
	if (prev)
		prev->next = lst->next;
	else
		tmp = begin->next;
	ft_lstdelone(&lst, &del);
	return ((prev) ? begin : tmp);
}
