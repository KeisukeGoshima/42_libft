/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:05:27 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 08:21:02 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char				*str;
	unsigned int		i;

	if (s == NULL || (*f) == NULL)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != 0)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	temp(unsigned int i, char c)
// {
// 	return (c + i);
// }
// #include <stdio.h>
// int main(void)
// {
// 	char *str = "0123456789";
// 	char *str1;
// 	str1 = ft_strmapi(str, &temp);
// 	printf("%s", str1);
// 	return (0);
// }