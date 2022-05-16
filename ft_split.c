/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapanciu <dapanciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:32:42 by dapanciu          #+#    #+#             */
/*   Updated: 2022/05/03 19:47:02 by dapanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	sub_string_size(char const *str, char c)
{
	size_t		i;
	size_t		lenght;

	i = 0;
	lenght = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			lenght++;
		}
		while (str[i] && str[i] != c)
		{
			i++;
		}
		if (str[i])
		{
			i++;
		}
	}
	return (lenght);
}

char	*ft_sub_string(char const *s, char c, size_t j)
{
	size_t			i;
	size_t			count;
	char			*str;

	str = NULL;
	i = -1;
	count = -1;
	while (++i < (size_t)ft_strlen(s) && s[i])
	{
		if (s[i] != c)
			count++;
		if (count == j && s[i] != c)
		{
			count = i;
			while (s[count] && s[count] != c)
				count++;
			str = ft_substr(s, i, count - i);
			if (!str)
				return (NULL);
		}
		while (s[i] && s[i] != c)
			i++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char			**bi_dim_array;
	size_t			sub_string;
	size_t			i;

	if (!s)
		return (NULL);
	sub_string = sub_string_size(s, c);
	if (c == '\0' && ft_strlen(s) > 0)
		sub_string = 1;
	bi_dim_array = (char **)ft_calloc(sub_string + 1, sizeof(char *));
	if (bi_dim_array == NULL)
		return (NULL);
	i = 0;
	while (i < sub_string)
	{
		bi_dim_array[i] = ft_sub_string(s, c, i);
		if (bi_dim_array[i] == NULL)
			return (NULL);
		i++;
	}
	bi_dim_array[i] = NULL;
	return (bi_dim_array);
}
