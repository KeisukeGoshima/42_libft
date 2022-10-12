/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:22:05 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/11 10:54:24 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*s1u;
	const unsigned char	*s2u;

	s1u = (const unsigned char *)s1;
	s2u = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s1u[i] != s2u[i])
			return (s1u[i] - s2u[i]);
		if (s1u[i] == '\0' || s2u[i] == '\0')
			break ;
		i++;
	}
	if (i != n)
		return (s1u[i] - s2u[i]);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "0123456789";
// 	char *str1 = "0123";
// 	int i;
// 	i = ft_strncmp(str, str1, 4);
// 	printf("%d\n", i);
// 	i = ft_strncmp(str, str1, 5);
// 	printf("%d", i);
// 	return (0);
// }