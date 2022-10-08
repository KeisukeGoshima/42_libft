/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:24:25 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 11:43:41 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t n, size_t size)
{
	void	*heap;
	size_t	temp;

	temp = size * n;
	if ((temp < size || temp < n) && (size != 0 && n != 0))
		return (NULL);
	heap = malloc(size * n);
	if (heap == NULL)
		return (NULL);
	ft_bzero(heap, n * size);
	return (heap);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str;

// 	str = ft_calloc(0, 1);
// 	if (str == NULL)
// 		printf("a");
// 	printf("%s\n", str);
// 	printf("%s", &str[1]);
// 	return (0);
// }