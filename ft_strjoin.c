/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapanciu <dapanciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:41:06 by dapanciu          #+#    #+#             */
/*   Updated: 2022/05/03 19:59:00 by dapanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int		lenghts1;
	unsigned int		lenghts2;
	char				*concat_res;

	if (!s1 || !s2)
		return (NULL);
	lenghts1 = ft_strlen(s1);
	lenghts2 = ft_strlen(s2);
	concat_res = malloc(lenghts1 + lenghts2 + 1);
	if (!concat_res)
		return (NULL);
	ft_strlcpy(concat_res, s1, lenghts1 + 1);
	ft_strlcat(concat_res, s2, lenghts1 + lenghts2 + 1);
	return (concat_res);
}
