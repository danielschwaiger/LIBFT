/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapanciu <dapanciu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 22:00:20 by dapanciu          #+#    #+#             */
/*   Updated: 2022/05/01 22:34:20 by dapanciu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*aux;

	if (!*del && !lst && !*f)
		return (NULL);
	result = NULL;
	while (lst)
	{
		aux = ft_lstnew((*f)(lst->content));
		ft_lstadd_back(&result, aux);
		lst = lst->next;
	}
	return (result);
}
