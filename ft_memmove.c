/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:15:57 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/05 11:16:59 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *buf1, const void *buf2, size_t n)
{
	char	*dest;
	char	*src;
	size_t	i;

	dest = (char *)buf1;
	src = (char *)buf2;
	i = 1;
	while (i <= n)
	{
		dest[n - i] = src[n - i];
		i++;
	}
	return (buf1);
}
