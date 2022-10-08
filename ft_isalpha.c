/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:12:28 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 09:26:41 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str1 = 'a';
// 	char str2 = '0';
// 	char str3 = '-';

// 	printf("%d\n", ft_isalpha(str1));
// 	printf("%d\n", ft_isalpha(str2));
// 	printf("%d\n", ft_isalpha(str3));
// 	return (0);
// }