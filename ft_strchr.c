/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:18:33 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 09:48:12 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	c %= 256;
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
// int main(void)
// {
// 	char *str1 = "01234567890123456789";
// 	char *str2;
// 	int i;

// 	str2 = ft_strchr(str1, '8');
// 	printf("%s\n", str2);
// 	return (0);
// }