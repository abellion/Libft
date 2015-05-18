/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 18:25:27 by abellion          #+#    #+#             */
/*   Updated: 2014/11/26 12:58:58 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned int	index;
	unsigned int	len_s1;
	unsigned int	len_s2;

	if (!s1 || !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	index = len_s1;
	while (index <= (len_s1 + len_s2))
	{
		s1[index] = s2[index - len_s1];
		index++;
	}
	return (s1);
}
