/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapanciu <dapanciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 09:10:42 by dapanciu          #+#    #+#             */
/*   Updated: 2022/05/03 20:02:37 by dapanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int			i;
	unsigned char			*aux1;
	unsigned char			*aux2;

	aux1 = (unsigned char *)s1;
	aux2 = (unsigned char *)s2;
	i = 0;
	while ((aux1[i] || aux2[i]) && i < n)
	{
		if (aux1[i] != aux2[i])
		{
			return (aux1[i] - aux2[i]);
		}
		i++;
	}
	return (0);
}
