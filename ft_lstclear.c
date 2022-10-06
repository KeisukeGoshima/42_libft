/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:32:57 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/06 13:39:17 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*tempnext;

	if (lst != 0)
	{
		temp = *lst;
		tempnext = temp -> next;
		(*del)(temp -> content);
		temp -> next = 0;
		free(temp);
		while (tempnext != 0)
		{
			temp = tempnext;
			tempnext = temp -> next;
			(*del)(temp -> content);
			temp -> next = 0;
			free(temp);
		}
		lst = 0;
	}
}
