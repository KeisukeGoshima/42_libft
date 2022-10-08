/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:12:58 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 09:26:23 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
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

// 	printf("%d\n", ft_isalnum(str1));
// 	printf("%d\n", ft_isalnum(str2));
// 	printf("%d\n", ft_isalnum(str3));
// 	return (0);
// }