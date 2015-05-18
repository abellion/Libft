/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:20:57 by abellion          #+#    #+#             */
/*   Updated: 2014/12/17 15:27:55 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t		ft_strlen(const char *s)
{
	const char	*str2;

	if (!s)
		return (0);
	str2 = s;
	while (*s)
		s++;
	return (s - str2);
}
