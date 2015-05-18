/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/27 19:11:11 by abellion          #+#    #+#             */
/*   Updated: 2015/04/27 21:18:12 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_tabdel_str(void *str)
{
	ft_strdel((char **)&str);
}

void	ft_tabdel(void ***tab, void (*del)(void *))
{
	int		i;

	i = 0;
	if (!tab || !(*tab))
		return ;
	while ((*tab)[i])
	{
		(del)((*tab)[i]);
		i++;
	}
	free(*tab);
	*tab = NULL;
}
