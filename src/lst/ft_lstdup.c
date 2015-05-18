/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 16:22:49 by abellion          #+#    #+#             */
/*   Updated: 2015/02/17 16:24:56 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list		*ft_lstdup(t_list *lst)
{
	t_list		*dup;
	t_list		*begin;

	dup = ft_lstnew(NULL, 0);
	begin = dup;
	while (lst)
	{
		dup->next = ft_lstnew(lst->content, ft_strlen(lst->content) + 1);
		dup = dup->next;
		lst = lst->next;
	}
	return (begin->next);
}
