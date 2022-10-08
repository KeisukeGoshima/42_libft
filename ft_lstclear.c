/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:32:57 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 16:39:15 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*tempnext;

	if (lst == NULL)
		return ;
	temp = *lst;
	while (temp != 0)
	{
		tempnext = temp -> next;
		temp -> next = 0;
		if ((*del) != NULL)
			(*del)(temp -> content);
		free(temp);
		temp = tempnext;
	}
	*lst = NULL;
}
