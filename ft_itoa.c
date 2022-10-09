/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 07:31:02 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/09 09:38:29 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	countdigit(long n)
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

void	setnum(long n, int count, char *str, int sign)
{
	int		digit;
	long	div;
	int		i;

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
	long	num;
	int		sign;
	char	*str;

	sign = 0;
	num = n;
	if (num <= 0)
	{
		sign = 1;
		num *= -1;
	}
	count = countdigit(num);
	str = malloc(sizeof(char) * (count + sign + 1));
	if (str == NULL)
		return (NULL);
	setnum(num, count, str, sign);
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