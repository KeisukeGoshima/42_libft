/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:15:25 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 10:24:29 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next != 0)
		lst = lst -> next;
	return (lst);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list * l =  NULL;
// 	ft_lstadd_front(&l, ft_lstnew((void*)1));
// 	ft_lstadd_front(&l, ft_lstnew((void*)2));
// 	ft_lstadd_front(&l, ft_lstnew((void*)3));
// 	printf("%d\n", (int)l->content);
// 	l = ft_lstlast(l);
// 	printf("%d", (int)l->content);
// }