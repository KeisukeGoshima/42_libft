/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:22:05 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/06 09:50:58 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	unsigned char	*s1u;
	unsigned char	*s2u;

	s1u = (unsigned char*)s1;
	s2u = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (s1u[i] != s2u[i])
			return (s1u[i] - s2u[i]);
		if (s1u[i] == '\0' || s2u[i] == '\0')
			break ;
		i++;
	}
	if (i != n)
		return (s1u[i] - s2u[i]);
	return (0);
}
