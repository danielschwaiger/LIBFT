/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapanciu <dapanciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:27:33 by dapanciu          #+#    #+#             */
/*   Updated: 2022/05/03 19:58:22 by dapanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	counter;

	counter = (size_t)n;
	if (dst != src)
	counter = 0;
	while (counter < n && (src || dst))
	{
		((char *)dst)[counter] = ((char *)src)[counter];
		counter++;
	}
	return (dst);
}
