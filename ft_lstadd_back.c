/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:19:16 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/09 09:44:53 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (new == NULL || lst == NULL)
		return ;
	else if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp -> next != 0)
			temp = temp -> next;
		temp -> next = new;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list ** l =  NULL; t_list * l2 =  NULL; 
// 	printf("%p\n", l);
// 	ft_lstadd_back(l, ft_lstnew((void*)1));
// 	printf("%p", l);
// }