/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapanciu <dapanciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:54:20 by dapanciu          #+#    #+#             */
/*   Updated: 2022/05/03 20:00:24 by dapanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprintx(int i, const char	*str)
{	
	i = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' \
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	i = 0;
	result = 0;
	sign = 1;
	i = ft_isprintx(i, str);
	if (str[i] == '-' || str[i] == '+')
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((result > INT_MAX / 10) \
			|| (result == INT_MAX / 10))
		{
			if (sign == 1)
				return (INT_MAX);
			return (INT_MIN);
		}
		result = result * 10 + str[i++] - '0';
	}
	return (result * sign);
}
