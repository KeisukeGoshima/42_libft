/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 07:09:35 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/05 07:47:06 by kgoshima         ###   ########.fr       */
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

void	*ft_memset(void *buf, int ch, size_t n)
{
	char	*str;

	str = (char *)buf;
	while (n--)
		*str++ = ch;
	return (buf);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n--)
		*str++ = 0;
}

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	char	*dest;
	char	*src;

	dest = (char *)buf1;
	src = (char *)buf2;
	while (n--)
		*dest++ = *src++;
	return (buf1);
}

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;

	dest = (char *)buf1;
	src = (char *)buf2;
	i = 1;
	while (i <= n)
	{
		dest[n - i] = src[n - i];
		i++;
	}
	return (buf1);
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