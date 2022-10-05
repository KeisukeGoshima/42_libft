/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 07:48:56 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/05 09:18:57 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
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

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (size > len_dest)
	{
		while (i < len_src && len_dest + i < size)
		{
			dst[len_dest + i] = src[i];
			i++;
		}
		dst[size - 1] = '\0';
		return (len_dest + len_src);
	}
	return (size + len_src);
}

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
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