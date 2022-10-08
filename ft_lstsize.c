/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:10:39 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 10:32:15 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (lst == NULL)
		return (0);
	while (lst -> next != 0)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list * l =  NULL;
// 	int i;
// 	ft_lstadd_front(&l, ft_lstnew((void*)1));
// 	ft_lstadd_front(&l, ft_lstnew((void*)2));
// 	ft_lstadd_front(&l, ft_lstnew((void*)3));
// 	i = ft_lstsize(l);
// 	printf("%d", i);
// }