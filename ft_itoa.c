/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapanciu <dapanciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 23:11:27 by dapanciu          #+#    #+#             */
/*   Updated: 2022/05/03 19:57:59 by dapanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	if (n == 0)
		size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	num_size;
	int		temp;

	temp = n;
	num_size = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * num_size + 1);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return ((char *)ft_memmove(str, "-2147483648", 12));
	str[num_size--] = '\0';
	if (n < 0)
	{
		n = -n;
		str[0] = '-';
	}
	while (num_size > 0)
	{
		str[num_size--] = (n % 10) + '0';
		n = n / 10;
	}
	if (temp >= 0)
		str[num_size] = n + '0';
	return (str);
}
