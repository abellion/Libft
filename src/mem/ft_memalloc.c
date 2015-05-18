/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 17:07:12 by abellion          #+#    #+#             */
/*   Updated: 2014/11/26 12:58:33 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void				*allocation;
	char				*explorer;
	unsigned int		index;

	index = 0;
	if ((allocation = (void *)malloc(size)))
	{
		explorer = (char *)allocation;
		while (index < size)
		{
			explorer[index] = 0;
			index++;
		}
		return (allocation);
	}
	return (0);
}
