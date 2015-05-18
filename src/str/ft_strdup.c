/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 17:39:15 by abellion          #+#    #+#             */
/*   Updated: 2014/12/11 16:24:23 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new_string;

	if (!s1)
		return (0);
	if (!(new_string = ft_strnew(ft_strlen(s1))))
		return (0);
	return (ft_strcpy(new_string, s1));
}
