/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:27:03 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/09 10:49:52 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	len_s;
	size_t	i;

	if (s == NULL)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s)
		len = 0;
	else if (start + len > len_s)
		len = len_s - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		if (len_s <= start + i)
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