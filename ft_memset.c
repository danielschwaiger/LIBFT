/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapanciu <dapanciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 22:33:32 by dapanciu          #+#    #+#             */
/*   Updated: 2022/05/03 20:02:17 by dapanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*i;
	size_t			x;

	x = 0;
	i = (unsigned char *)b;
	while (x < len)
	{
		i[x] = c;
		x++;
	}
	return (b);
}
