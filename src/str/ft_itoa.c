/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abellion <abellion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 21:33:22 by abellion          #+#    #+#             */
/*   Updated: 2015/01/05 18:38:23 by abellion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

long long int	get_size(long long int n)
{
	int		size;

	size = 1;
	if (n < 0)
		size++;
	while (n /= 10)
		size++;
	return (size);
}

long long int	absolute_value(long long int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

char			*ft_itoa(long long int n)
{
	int		size;
	char	*number;

	size = get_size(n);
	n = absolute_value(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	if (!(number = ft_strnew(size)))
		return (0);
	while (n % 10 || size > 1)
	{
		number[size - 1] = (n % 10) + '0';
		n /= 10;
		size--;
	}
	if (size == 1 && number[size])
		number[0] = '-';
	return (number);
}
