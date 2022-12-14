/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:16:01 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 16:49:28 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)buf;
	while (n--)
		*str++ = (unsigned char)ch;
	return (buf);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s[] = "0123456789";
// 	char t[] = "abcd";
// 	char *s1;

// 	s1 = ft_memset(s, 'l', 2);
// 	printf("%s\n", s);
// 	printf("%s\n", s1);
// 	return (0);
// }