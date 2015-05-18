/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 16:06:05 by abellion          #+#    #+#             */
/*   Updated: 2014/11/26 12:58:36 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char				*dest_cpy;
	char				*src_cpy;
	unsigned int		index;

	if (!dst || !src)
		return (0);
	index = 0;
	dest_cpy = (char *)dst;
	src_cpy = (char *)src;
	while (index < n)
	{
		dest_cpy[index] = src_cpy[index];
		if (src_cpy[index] == c)
			return (&dest_cpy[index + 1]);
		index++;
	}
	return (0);
}
