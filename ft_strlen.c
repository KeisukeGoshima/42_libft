/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 07:09:35 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/05 11:17:06 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	str1[] = "0123456789";
// 	char	str2[] = "0123456789";
// 	char	str3[] = "0123456789";
// 	char	str4[] = "abcdef";
// 	char	str5[] = "0123456789abcdef";
// 	printf("ft_strlen: %lu\n", ft_strlen("012"));
// 	ft_memset(str1, 'a', 5);
// 	printf("memset: %s\n", str1);
// 	ft_bzero(str2, 3);
// 	printf("bzero: %s\n", str2);
// 	ft_memcpy(str3, str4, 5);
// 	printf("memcpy: %s\n", str3);
// 	ft_memmove(str5+5, str5, 7);
// 	printf("memmove: %s\n", str5);
// 	return (1);
// }