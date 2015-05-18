/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 17:33:54 by abellion          #+#    #+#             */
/*   Updated: 2015/03/11 16:13:36 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int i_start;
	unsigned int i_end;

	if (!s)
		return (0);
	if (!ft_strlen(s))
		return (ft_strdup(""));
	i_start = 0;
	i_end = ft_strlen(s) - 1;
	while (s[i_start] == ' ' || s[i_start] == '\n' || s[i_start] == '\t')
		i_start++;
	while (ft_strlen(s) > i_start && (s[i_end] == ' ' || s[i_end] == '\n' ||
				s[i_end] == '\t'))
		i_end--;
	return (ft_strsub(s, i_start, (i_end - i_start + 1)));
}
