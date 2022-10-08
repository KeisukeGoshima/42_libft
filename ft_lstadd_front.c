/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:07:20 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 16:38:12 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp;
	
	if (new != NULL || lst == NULL)
	{
		temp = ft_lstlast(new);
		if (lst != NULL)
			temp -> next = *lst;
		*lst = new;
	}
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list * l =  NULL; t_list * l2 =  NULL; 
// 	ft_lstadd_front(&l, ft_lstnew((void*)1));
// 	printf("%d", (int)l->content);
// }