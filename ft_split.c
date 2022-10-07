/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 06:59:22 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 08:21:56 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		countsep(char const *s, char c);
void	setstring(char const *s, char c, char **str);
void	setone(char const *s, char **str, int count, int amount);

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (s == NULL)
		return (NULL);
	str = malloc(sizeof(char *) * (countsep(s, c) + 1));
	if (str == NULL)
		return (NULL);
	setstring(s, c, str);
	return (str);
}

int	countsep(char const *s, char c)
{
	int	i;
	int	count;
	int	amount;

	i = 0;
	count = 0;
	amount = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (amount != 0)
				count++;
			amount = 0;
		}
		else
			amount++;
		i++;
	}
	if (amount != 0)
		count++;
	return (count);
}

void	setstring(char const *s, char c, char **str)
{
	int	i;
	int	count;
	int	amount;

	i = 0;
	count = 0;
	amount = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (amount != 0)
				setone(&s[i - amount], str, count++, amount);
			amount = 0;
		}
		else
			amount++;
		i++;
	}
	if (amount != 0)
		setone(&s[i - amount], str, count++, amount);
	str[count] = 0;
}

void	setone(char const *s, char **str, int count, int amount)
{
	char	*temp;
	int		i;

	temp = malloc(sizeof(char) * (amount + 1));
	i = 0;
	while (i < amount)
	{
		temp[i] = s[i];
		i++;
	}
	temp[i] = '\0';
	str[count] = temp;
}

// #include <stdio.h>
// int main(void)
// {
// 	char **str;
// 	char *str1 = "01234567890123456789";
// 	int i;

// 	str = ft_split(str1, '4');
// 	i = 0;
// 	while (str[i] != 0)
// 		printf("%s\n", str[i++]);
// 	return (0);
// }