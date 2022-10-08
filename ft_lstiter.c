/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 07:18:49 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 10:21:39 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst != NULL)
	{
		while (lst != 0)
		{
			(*f)(lst -> content);
			lst = lst -> next;
		}
	}
}

// #include <stdio.h>
// void temp(void *content)
// {
// 	printf("%c", (char)content);
// }

// int main(void)
// {
// 	t_list *l =  ft_lstnew((void*)'5');
// 	ft_lstiter(l, &temp);
// }