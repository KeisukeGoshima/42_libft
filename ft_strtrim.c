/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:51:40 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/06 07:30:29 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_frontcheck(char const *s1, char const *set, int front)
{
	int	i;

	while (s1[front] != '\0')
	{
		i = 0;
		while (set[i] != '\0')
		{
			if (s1[front] == set[i])
				break ;
			i++;
		}
		if (set[i] == '\0')
			break ;
		front++;
	}
	return (front);
}

int	ft_backcheck(char const *s1, char const *set, int back)
{
	int	i;

	while (back >= 0)
	{
		i = 0;
		while (set[i] != '\0')
		{
			if (s1[back] == set[i])
				break ;
			i++;
		}
		if (set[i] == '\0')
			break ;
		back--;
	}
	return (back);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		front;
	int		back;
	int		i;
	char	*str;

	front = ft_frontcheck(s1, set, 0);
	back = ft_backcheck(s1, set, ft_strlen(s1) - 1);
	if (front > back)
		str = malloc(sizeof(char) * 1);
	else
		str = malloc(sizeof(char) * (back - front + 2));
	i = 0;
	while (i < back - front + 1)
	{
		str[i] = s1[front + i];
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "*;|@123***456@|;";
// 	char *dest;

// 	dest = ft_strtrim(str, "*;|@123456");
// 	printf("%s", dest);
// 	return (0);
// }