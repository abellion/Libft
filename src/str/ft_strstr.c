/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:36:32 by abellion          #+#    #+#             */
/*   Updated: 2015/03/14 15:39:19 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	unsigned int	index;

	if (!s1 || !s2)
		return (0);
	index = 0;
	if (!ft_strlen(s2))
		return ((char *)s1);
	while (s1[index])
	{
		if (ft_strnequ(&s1[index], s2, ft_strlen(s2)))
			return ((char *)&s1[index]);
		index++;
	}
	return (0);
}
