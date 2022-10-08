/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 06:59:22 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 17:12:18 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		countsep(char const *s, char c);
void	setstring(char const *s, char c, char **str, int *error);
char	*setone(char const *s, int *error, int amount);

void	error_check(char **str)
{
	int	i;
	
	i = 0;
	while (str[i] != NULL)
		free(str[i++]);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		error;

	error = 0;
	if (s == NULL)
		return (NULL);
	str = malloc(sizeof(char *) * (countsep(s, c) + 1));
	if (str == NULL)
		return (NULL);
	setstring(s, c, str, &error);
	if (error)
	{
		error_check(str);
		return (NULL);
	}
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

void	setstring(char const *s, char c, char **str, int *error)
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
				str[count++] = setone(&s[i - amount], error, amount);
			amount = 0;
		}
		else
			amount++;
		i++;
	}
	if (amount != 0)
		str[count++] = setone(&s[i - amount], error, amount);
	str[count] = 0;
}

char	*setone(char const *s, int *error, int amount)
{
	char	*temp;
	int		i;

	if (*error)
		return (NULL);
	temp = malloc(sizeof(char) * (amount + 1));
	if (temp == NULL)
	{
		*error = 1;
		return (NULL);
	}
	i = 0;
	while (i < amount)
	{
		temp[i] = s[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
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