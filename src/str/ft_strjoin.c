/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:21:02 by abellion          #+#    #+#             */
/*   Updated: 2015/01/25 18:52:06 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *new_str;

	if (!s1 || !s2 || !(new_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (0);
	return (ft_strcat(ft_strcpy(new_str, s1), s2));
}
