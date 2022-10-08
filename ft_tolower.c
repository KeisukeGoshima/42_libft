/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:18:41 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 10:07:25 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c - 'A' + 'a');
	return (c);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("ft_tolower(a), %c\n", ft_tolower('a'));
// 	printf("ft_tolower(A), %c\n", ft_tolower('A'));
// 	printf("ft_tolower(1), %c\n", ft_tolower('1'));
// }