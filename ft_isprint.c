/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:12:52 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 09:27:22 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (' ' <= c && c <= '~')
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

// 	printf("%d\n", ft_isprint(str1));
// 	printf("%d\n", ft_isprint(str2));
// 	printf("%d\n", ft_isprint(str3));
// 	return (0);
// }