/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:22:31 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/06 10:59:37 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s1 == NULL && len == 0)
		return (NULL);
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0' && i < len)
	{
		if (s1[i] == s2[j])
		{
			while (s2[j] != '\0')
			{
				if (s1[i + j] != s2[j] || i + j >= len)
					break ;
				j++;
			}
			if (s2[j] == '\0')
				return ((char *)&s1[i]);
			j = 0;
		}
		i++;
	}
	return (0);
}
