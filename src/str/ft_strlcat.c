/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 12:08:10 by abellion          #+#    #+#             */
/*   Updated: 2014/11/26 12:59:31 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	unsigned int len_dest;

	if (!dst || !src)
		return (0);
	len_dest = ft_strlen(dst);
	if (size < len_dest)
		return (len_dest + ft_strlen(src) - (len_dest - size));
	else
	{
		ft_strncat(dst, src, size - len_dest - 1);
		return (len_dest + ft_strlen(src));
	}
}
