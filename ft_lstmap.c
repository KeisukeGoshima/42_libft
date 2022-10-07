/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 07:23:03 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 08:39:21 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*temp;
	t_list	*temp_before;

	new_list = NULL;
	while (lst != NULL)
	{
		temp = malloc(sizeof(t_list));
		if (temp == NULL)
		{
			ft_lstclear(&new_list, (*del));
			return (NULL);
		}
		temp -> content = (*f)(lst -> content);
		if (new_list == NULL)
			new_list = temp;
		else
			temp_before -> next = temp;
		temp_before = temp;
		lst = lst -> next;
	}
	return (new_list);
}
