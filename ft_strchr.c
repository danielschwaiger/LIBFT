/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapanciu <dapanciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 20:05:11 by dapanciu          #+#    #+#             */
/*   Updated: 2022/05/03 19:58:51 by dapanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int		i;
	char				*res;
	unsigned char		casted_c;

	i = 0;
	casted_c = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == casted_c)
		{
			res = (char *)s;
			return (&res[i]);
		}
		i++;
	}
	if (s[i] == casted_c)
	{
		res = (char *)s;
		return (&res[i]);
	}
	return (0);
}
