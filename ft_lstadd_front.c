/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:07:20 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 08:38:37 by kgoshima         ###   ########.fr       */
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

// int main(void)
// {
// 	t_list	*temp = ft_lstnew((void *)2);
// 	t_list **l = NULL;
// 	printf("%p\n", l);
// 	t_list *l2 = ft_lstnew((void*)1);
// 	printf("l2: %p\n", l2);
// 	ft_lstadd_front(l, l2);
// 	printf("l: %p", l);
// 	// /* 1 */ printf("%d\n", l->content == (void*)1);
// 	// /* 2 */ printf("%d", l->next == 0);
// }