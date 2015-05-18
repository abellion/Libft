/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 18:10:19 by abellion          #+#    #+#             */
/*   Updated: 2015/03/15 19:56:13 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		nb_parts(char const *s, char c)
{
	int				index;
	int				nb_parts;

	nb_parts = 1;
	index = 0;
	while (s && s[index])
	{
		nb_parts = (s[index] == c) ? nb_parts + 1 : nb_parts;
		index++;
	}
	return (nb_parts);
}

char	**ft_strsplit(char const *s, char c)
{
	unsigned int	i_start;
	unsigned int	i_parts;
	unsigned int	i_str;
	unsigned int	len_str;
	char			**splits;

	if (!s || !c || !(splits = malloc(sizeof(char *) * (nb_parts(s, c) + 1))))
		return (0);
	len_str = ft_strlen(s);
	i_parts = 0;
	i_start = 0;
	i_str = 0;
	while (s && s[i_str])
	{
		if (s[i_str] == c && s[i_str + 1] != c)
			i_start = i_str + 1;
		else if ((s[i_str] != c && s[i_str + 1] == c) || i_str == (len_str - 1))
		{
			splits[i_parts] = ft_strsub(s, i_start, (i_str - i_start + 1));
			i_parts++;
		}
		i_str++;
	}
	splits[i_parts] = NULL;
	return (splits);
}
