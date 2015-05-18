/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:01:40 by abellion          #+#    #+#             */
/*   Updated: 2014/11/26 12:59:36 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	int		index;

	index = 0;
	if (!f || !s || !(new_str = ft_strnew(ft_strlen(s))))
		return (0);
	while (s[index])
	{
		new_str[index] = (*f)(s[index]);
		index++;
	}
	return (new_str);
}
