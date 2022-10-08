/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:16:05 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 09:20:49 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		*str++ = 0;
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "111111";

// 	printf("%s\n", str);
// 	ft_bzero((void *)str, 1);
// 	printf("%s\n", str);
// 	printf("%s", &str[1]);
// 	return (0);
// }