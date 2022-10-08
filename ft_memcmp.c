/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:22:22 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 09:40:30 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)buf1;
	s2 = (unsigned char *)buf2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s[] = "0123456789";
// 	char t[] = "0124";
// 	printf("%d\n", ft_memcmp(s, t, 3));
// 	printf("%d\n", ft_memcmp(s, t, 4));
// 	return (0);
// }