/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:18:46 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 10:06:58 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (c - 'a' + 'A');
	return (c);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("ft_toupper(a), %c\n", ft_toupper('a'));
// 	printf("ft_toupper(A), %c\n", ft_toupper('A'));
// 	printf("ft_toupper(1), %c\n", ft_toupper('1'));
// }
