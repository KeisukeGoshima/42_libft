/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:12:44 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 09:27:11 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
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

// 	printf("%d\n", ft_isdigit(str1));
// 	printf("%d\n", ft_isdigit(str2));
// 	printf("%d\n", ft_isdigit(str3));
// 	return (0);
// }