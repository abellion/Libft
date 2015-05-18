/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:33:28 by abellion          #+#    #+#             */
/*   Updated: 2015/04/27 20:34:41 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*clear_str(char *str)
{
	char	*new;
	int		index;
	int		start;

	index = 0;
	start = 0;
	str = ft_strtrim(str);
	while (str[index])
	{
		if (str[index] == '\v' || str[index] == '\f' || str[index] == '\r')
			start++;
		index++;
	}
	new = ft_strdup(&str[start]);
	ft_strdel(&str);
	return (new);
}

int		ft_atoi(const char *str)
{
	int		i;
	char	*new;
	int		number;
	int		negative;

	if (!str)
		return (0);
	number = 0;
	new = clear_str((char *)str);
	negative = (new[0] == '-') ? -1 : 1;
	i = (new[0] == '-' || new[0] == '+') ? 1 : 0;
	while (new[i] >= '0' && new[i] <= '9')
	{
		number = number * 10 + (new[i] - '0');
		i++;
	}
	ft_strdel(&new);
	return (number * negative);
}
