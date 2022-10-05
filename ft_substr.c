/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:27:03 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/05 11:43:25 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		if (ft_strlen(s) <= start + i)
			break ;
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	*str = "0123456789";
// 	char	*des;

// 	des = ft_substr(str, 3, 4);
// 	printf("%s", des);
// }