/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:12:40 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 09:27:04 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (0 <= c && c <= 127)
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

// 	printf("%d\n", ft_isascii(str1));
// 	printf("%d\n", ft_isascii(str2));
// 	printf("%d\n", ft_isascii(str3));
// 	return (0);
// }