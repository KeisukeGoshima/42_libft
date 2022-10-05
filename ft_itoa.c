/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 07:31:02 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/06 08:11:56 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	countdigit(int n)
{
	int	digit;

	digit = 0;
	while (n != 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

void	setnum(int n, int count, char *str, int sign)
{
	int		digit;
	long	div;
	int		i;

	if (n < 0)
		n *= -1;
	digit = countdigit(n);
	div = 1;
	while (digit--)
		div *= 10;
	i = sign;
	while (i < count + sign)
	{
		str[i++] = ((n % div) / (div / 10)) + '0';
		div /= 10;
	}
	if (sign)
	{
		if (count)
			str[0] = '-';
		else
			str[0] = '0';
	}
}

char	*ft_itoa(int n)
{
	int		count;
	int		ismin;
	int		sign;
	char	*str;

	count = countdigit(n);
	sign = 0;
	ismin = 0;
	if (n == -2147483648)
	{
		ismin = 1;
		n += 1;
	}
	if (n <= 0)
		sign = 1;
	str = malloc(sizeof(char) * (count + sign + 1));
	if (str == NULL)
		return (NULL);
	setnum(n, count, str, sign);
	if (ismin)
		str[count + sign - 1] = '8';
	str[count + sign] = '\0';
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str;

// 	str = ft_itoa(-1);
// 	printf("%s", str);
// 	return (0);
// }