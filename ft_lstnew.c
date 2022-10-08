/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:03:53 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 10:30:53 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*temp;

	temp = malloc(sizeof(t_list));
	if (temp == NULL)
		return (NULL);
	temp -> content = content;
	temp -> next = NULL;
	return (temp);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list * l =   ft_lstnew((void*)1);
// 	printf("%d\n", (int)l->content);
// }