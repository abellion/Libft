/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:04:13 by abellion          #+#    #+#             */
/*   Updated: 2014/11/26 12:59:54 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2)
		return (0);
	if (ft_strstr(ft_strsub(s1, 0, n), s2))
		return (ft_strstr(s1, s2));
	return (0);
}
