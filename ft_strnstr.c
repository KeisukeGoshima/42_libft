/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:22:31 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 10:07:46 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_search(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && i < len)
	{
		if (s1[i] == s2[j])
		{
			while (s2[j] != '\0')
			{
				if (s1[i + j] != s2[j] || i + j >= len)
					break ;
				j++;
			}
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
			j = 0;
		}
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	if (s1 == NULL && len == 0)
		return (NULL);
	if (s2[0] == '\0')
		return ((char *)s1);
	return (ft_search(s1, s2, len));
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "0123456789";
// 	char *str1 = "45";
// 	char *i;
// 	i = ft_strnstr(str, str1, 9);
// 	printf("%s\n", i);
// 	i = ft_strnstr(str, str1, 4);
// 	printf("%s", i);
// 	return (0);
// }