/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:18:37 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 09:59:25 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	if (dst == NULL)
		len_dest = 0;
	else
		len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (size >= len_dest + 1)
	{
		while (i < len_src && len_dest + 1 + i < size)
		{
			dst[len_dest + i] = src[i];
			i++;
		}
		dst[len_dest + i] = '\0';
		return (len_dest + len_src);
	}
	return (size + len_src);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str1[] = "01234";
// 	char str2[] = "abcde";
// 	char str11[] = "01234";
// 	char str21[] = "abcde";
// 	size_t i;

// 	i = ft_strlcat(str1, str2, 10);
// 	printf("%s\n", str1);
// 	printf("%zu\n", i);
// 	i = ft_strlcat(str11, str21, 3);
// 	printf("%s\n", str11);
// 	printf("%zu\n", i);
// 	return (0);
// }