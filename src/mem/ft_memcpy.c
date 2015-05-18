/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:47:11 by abellion          #+#    #+#             */
/*   Updated: 2014/11/26 12:57:33 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char				*dest_cpy;
	char				*src_cpy;
	unsigned int		index;

	if (!src || !dst)
		return (0);
	dest_cpy = (char *)dst;
	src_cpy = (char *)src;
	index = 0;
	while (index < n)
	{
		dest_cpy[index] = src_cpy[index];
		index++;
	}
	dest_cpy[index] = '\0';
	return (dest_cpy);
}
