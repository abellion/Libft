/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/25 18:51:03 by abellion          #+#    #+#             */
/*   Updated: 2015/02/12 19:08:46 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strcjoin(char const *s1, char const *s2, char const c)
{
	char	*new;
	char	*convert;

	if (!s1 || !s2 || !c)
		return (0);
	convert = ft_strnew(2);
	convert[0] = c;
	convert[1] = '\0';
	new = ft_strjoin(s1, convert);
	new = ft_strjoin(new, s2);
	return (new);
}
