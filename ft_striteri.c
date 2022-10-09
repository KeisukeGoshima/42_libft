/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:24:13 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/09 10:14:03 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || (*f) == NULL)
		return ;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
}

// void temp(unsigned int i, char *s)
// {
// 	s[0] = 'a' + (int)i;
// }
// #include <stdio.h>
// int main(void)
// {
// 	char str1[] = "01234567890123456789";

// 	ft_striteri(str1, &temp);
// 	printf("%s\n", str1);
// 	return (0);
// }