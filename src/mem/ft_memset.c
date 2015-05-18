/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 11:09:36 by abellion          #+#    #+#             */
/*   Updated: 2014/12/05 18:01:13 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*string_cpy;
	unsigned int	index;

	if (!b)
		return (0);
	index = 0;
	string_cpy = (char *)b;
	while (index < len)
	{
		string_cpy[index] = c;
		index++;
	}
	return (string_cpy);
}
