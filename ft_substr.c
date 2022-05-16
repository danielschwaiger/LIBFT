/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapanciu <dapanciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 19:08:39 by dapanciu          #+#    #+#             */
/*   Updated: 2022/05/03 19:59:54 by dapanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*substr;
	size_t				strlenght;

	if (!s)
		return (NULL);
	strlenght = ft_strlen(s);
	if (len <= 0 || start >= strlenght)
	{
		substr = (char *)malloc(1);
		substr[0] = '\0';
		return (substr);
	}
	if (len > strlenght)
		len = strlenght - start;
	substr = malloc(sizeof(*s) * (len + 1));
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, &s[start], (len + 1));
	return (substr);
}
