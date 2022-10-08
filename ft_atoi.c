/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:20:29 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 12:57:47 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
int	ft_atoi(const char *str)
{
	long	num;
	int		i;
	int		sign;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9' || num * sign > num * 10 * sign)
		{
			if (num * sign > num * 10 * sign && num <= 0)
				num = 0;
			else if (num * sign > num * 10 * sign && num > 0)
				num = -1;
			break ;
		}
		num = num * 10 + sign * (str[i] - '0');
		i++;
	}
	return (num);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// int main(int argc, char **argv)
// {
// 	printf("atoi: %d\n", atoi(argv[argc-1]));
// 	printf("ft_atoi: %d\n", ft_atoi(argv[argc-1]));
// 	printf("%d\n", atoi(argv[argc-1]) == ft_atoi(argv[argc - 1]));
// 	printf("atoi: %d, ft_atoi:%d\n", atoi("9223372036854775808"), ft_atoi("9223372036854775808"));
// 	printf("atoi: %d, ft_atoi:%d\n", atoi("-9223372036854775809"), ft_atoi("-9223372036854775809"));
// 	return (0);
// }