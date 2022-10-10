/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:51:40 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/10 11:19:22 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_frontcheck(char const *s1, char const *set, size_t front)
{
	size_t	i;

	if (set == NULL)
		return (front);
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

static size_t	ft_backcheck(char const *s1, char const *set, size_t back)
{
	size_t	i;

	if (set == NULL)
		return (back);
	while (back > 0)
	{
		i = 0;
		while (set[i] != '\0')
		{
			if (s1[back - 1] == set[i])
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
	size_t	front;
	size_t	back;
	size_t	i;
	char	*str;

	if (s1 == NULL)
		return (NULL);
	front = ft_frontcheck(s1, set, 0);
	back = ft_backcheck(s1, set, ft_strlen(s1));
	if (front > back)
		str = malloc(sizeof(char) * 1);
	else
		str = malloc(sizeof(char) * (back - front + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < back - front)
	{
		str[i] = s1[front + i];
		i++;
	}
	str[i] = '\0';
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