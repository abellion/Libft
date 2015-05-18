/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 13:29:32 by abellion          #+#    #+#             */
/*   Updated: 2014/11/26 12:58:53 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	char				*string;
	unsigned int		index;

	if (s)
	{
		index = 0;
		string = (char *)s;
		while (index < n)
		{
			string[index] = '\0';
			index++;
		}
	}
}
