/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 17:44:34 by abellion          #+#    #+#             */
/*   Updated: 2014/11/26 12:59:43 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*new_s1;
	char	*new_s2;

	if (!s1 || !s2)
		return (0);
	new_s1 = ft_strnew(n);
	new_s2 = ft_strnew(n);
	ft_strncpy(new_s1, s1, n);
	ft_strncpy(new_s2, s2, n);
	return (ft_strcmp(new_s1, new_s2));
}
