/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:22:16 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 17:00:49 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	unsigned char	*str;
	size_t	i;

	str = (unsigned char *)buf;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)ch)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
// 	char s[] = "0123456789";
// 	char *t;
// 	t = ft_memchr(s, '4', 5);
// 	printf("%s\n", t);
// 	return (0);
// }
