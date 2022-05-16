/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapanciu <dapanciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 09:52:42 by dapanciu          #+#    #+#             */
/*   Updated: 2022/05/03 20:02:53 by dapanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int		i;
	int					last_occurence;
	char				*res;
	unsigned char		casted_c;

	i = 0;
	last_occurence = -1;
	casted_c = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == casted_c)
		{
			last_occurence = i;
		}
		i++;
	}
	if (s[i] == casted_c)
		last_occurence = i;
	res = (char *)s;
	if (last_occurence >= 0)
		return (&res[last_occurence]);
	return (0);
}
