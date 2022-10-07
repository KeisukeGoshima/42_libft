/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:27:03 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 08:23:45 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	int		i;
	int		length;

	if (s == NULL)
		return (NULL);
	length = (int)len;
	if (length + start > ft_strlen(s))
		length = ft_strlen(s) - start;
	if (length < 0)
		length = 0;
	dest = malloc(sizeof(char) * (length + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < length)
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