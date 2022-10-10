/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:20:29 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/10 11:11:32 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_check_front_atoi(const char *str, long num, int i, int sign)
{
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
		if (str[i] < '0' || str[i] > '9' )
			break ;
		if (num > 0 && num == LONG_MAX / 10 && (str[i] - '0') > LONG_MAX % 10)
			return (LONG_MAX);
		if (num > 0 && num > LONG_MAX / 10)
			return (LONG_MAX);
		if (num < 0 && num == LONG_MIN / 10 && -(str[i] - '0') < LONG_MIN % 10)
			return (LONG_MIN);
		if (num < 0 && num < LONG_MIN / 10)
			return (LONG_MIN);
		num = num * 10 + sign * (str[i] - '0');
		i++;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	return (ft_check_front_atoi(str, 0, 0, 1));
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// int main(int argc, char **argv)
// {
// 	printf("%ld\n", LONG_MIN % 10);
// 	printf("atoi: %d\n", atoi(argv[argc-1]));
// 	printf("ft_atoi: %d\n", ft_atoi(argv[argc-1]));
// 	printf("%d\n", atoi(argv[argc-1]) == ft_atoi(argv[argc - 1]));
// 	return (0);
// }