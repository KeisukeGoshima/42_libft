/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:07:13 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/09 10:31:33 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	i++;
	while (i > 0)
	{
		if (s[i - 1] == (char)c)
			return ((char *)&s[i - 1]);
		i--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char str1[] = "abcd4";
// 	char str2[] = "cd";
// 	char str11[] = "012345\06789";
// 	// char str21[] = "abcd";
// 	// char str3[100] = "0123456789";
// 	// char str4[] = "abcd";
// 	// char str31[100] = "0123456789";
// 	// char str41[] = "abcd";
// 	char str5[] = "01234567489";
// 	char str51[] = "abcd";
// 	int size = 4;
// 	// int i;
// 	printf("ft_strnstr: %s\n", ft_strnstr(str1, str2, size));
// 	printf("strnstr: %s\n", strnstr(str1, str2, size));
// 	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, size));
// 	printf("ft_memcmp: %d\n", ft_memcmp(str1, str2, size));
// 	printf("memcmp: %d\n", memcmp(str1, str2, size));
// 	printf("memcmp: %d\n", memcmp(str1, str2, size));
// 	printf("ft_memchr: %s\n", ft_memchr(str11, '8', 10));
// 	printf("memchr: %s\n", memchr(str11, '8', 10));
// 	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, size));
// 	printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, size));
// 	printf("strncmp: %d\n", strncmp(str1, str2, size));
// 	printf("strncmp: %d\n", strncmp(str1, str2, size));
// 	printf("ft_strrchr: %s\n", ft_strrchr(str5, '4'));
// 	printf("ft_strrchr: %s\n", ft_strrchr(str51, '\0'));
// 	printf("strrchr: %s\n", strrchr(str5, '4'));
// 	printf("strrchr: %s\n", strrchr(str51, '\0'));
// 	return (0);
// }