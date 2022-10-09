/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:43:45 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/09 10:23:56 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	len_s1;
	size_t	len_s2;

	len_s1 = 0;
	len_s2 = 0;
	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 != NULL)
		len_s1 = ft_strlen(s1);
	if (s2 != NULL)
		len_s2 = ft_strlen(s2);
	dest = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	if (s1 != NULL)
		while (*s1)
			dest[i++] = *s1++;
	if (s2 != NULL)
		while (*s2)
			dest[i++] = *s2++;
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	*str;
// 	char	*src1 = "abc";
// 	char	*src2 = "123";
// 	src1 = 0;
// 	str = ft_strjoin(src1, src2);
// 	printf("%s", str);
// }