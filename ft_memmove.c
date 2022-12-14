/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:15:57 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/10 11:14:50 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	backcopy(unsigned char *dest, unsigned char *src, size_t n)
{
	size_t	i;

	i = 1;
	while (i <= n)
	{
		dest[n - i] = src[n - i];
		i++;
	}
}

static void	frontcopy(unsigned char *dest, unsigned char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
}

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	if (buf1 == NULL && buf2 == NULL)
		return (buf1);
	dest = (unsigned char *)buf1;
	src = (unsigned char *)buf2;
	if (buf1 > buf2)
		backcopy(dest, src, n);
	else if (buf2 > buf1)
		frontcopy(dest, src, n);
	return (buf1);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s[] = "0123456789";
// 	char t[] = "abcd";
// 	char *s1;

// 	s1 = ft_memmove(s, t, 2);
// 	printf("%s\n", s);
// 	printf("%s\n", s1);
// 	return (0);
// }