/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:43:45 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/05 11:58:27 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (*s1)
		dest[i++] = *s1++;
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
// 	str = ft_strjoin(src1, src2);
// 	printf("%s", str);
// }