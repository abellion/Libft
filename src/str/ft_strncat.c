/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:25:27 by abellion          #+#    #+#             */
/*   Updated: 2014/11/26 12:59:40 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*new_s2;

	if (!s1 || !s2)
		return (0);
	new_s2 = ft_strnew(n);
	ft_strncpy(new_s2, s2, n);
	return (ft_strcat(s1, new_s2));
}
