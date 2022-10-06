/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 07:48:56 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/06 11:02:24 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (i + 1 < n)
	{
		if (src[i] == '\0')
			break ;
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str1[] = "0123456789";
// 	char str2[] = "abcd";
// 	char str11[] = "0123456789";
// 	char str21[] = "abcd";
// 	char str3[100] = "0123456789";
// 	char str4[] = "abcd";
// 	char str31[100] = "0123456789";
// 	char str41[] = "abcd";
// 	char str5[] = "0123456789";
// 	char str51[] = "abcd";
// 	int size = 4;
// 	int i;
// 	i = ft_strlcpy(str1, str2, 6);
// 	printf("ft_strlcpy: %s, %d\n", str1, i);
// 	i = strlcpy(str11, str21, 6);
// 	printf("ft_strlcpy: %s, %d\n", str11, i);
// 	i = ft_strlcat(str3, str4, size);
// 	printf("ft_strlcat: %s, %d\n", str3, i);
// 	i = strlcat(str31, str41, size);
// 	printf("ft_strlcat: %s, %d\n", str31, i);
// 	printf("ft_toupper(a), %c\n", ft_toupper('a'));
// 	printf("ft_toupper(A), %c\n", ft_toupper('A'));
// 	printf("ft_toupper(1), %c\n", ft_toupper('1'));
// 	printf("ft_strchr: %s\n", ft_strchr(str5, '4'));
// 	printf("ft_strchr: %s\n", ft_strchr(str51, '4'));
// 	printf("strchr: %s\n", strchr(str5, '4'));
// 	printf("strchr: %s\n", strchr(str51, '4'));
// 	return (0);
// }