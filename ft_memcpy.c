/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:15:53 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/06 12:55:51 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	if (buf1 == NULL && buf2 == NULL)
		return (buf1);
	dest = (unsigned char *)buf1;
	src = (unsigned char *)buf2;
	while (n--)
		*dest++ = *src++;
	return (buf1);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "0123456789";
// 	void *add;
// 	void *add2;
// 	void *add3;
// 	void *add4;
// 	add = &str[0];
// 	add = 0;
// 	add2 = &str[5];
// 	// add2 = 0;
// 	add3 = memcpy(add, add2, 2);
// 	add4 = ft_memcpy(add, add2, 0);
// 	printf("%s\n", str);
// 	printf("%s\n", (char *)add3);
// 	printf("%s", (char *)add4);
// }