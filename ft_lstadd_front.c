/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:07:20 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 10:14:14 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		if (lst != NULL)
			new -> next = *lst;
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