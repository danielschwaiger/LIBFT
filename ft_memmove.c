/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapanciu <dapanciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:55:38 by dapanciu          #+#    #+#             */
/*   Updated: 2022/05/03 19:58:27 by dapanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*buff1;
	char			*buff2;

	i = len;
	buff1 = (char *)src;
	buff2 = (char *)dst;
	if (dst == src)
		return (dst);
	else if (dst > src)
	{
		while (i-- > 0)
			*(buff2 + i) = *(buff1 + i);
	}
	else
	{
		i = 0;
		while (i < len)
		{
			*(buff2 + i) = *(buff1 + i);
			i++;
		}
	}
	return (buff2);
}
