/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:15:53 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/05 11:16:45 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *buf1, const void *buf2, size_t n)
{
	char	*dest;
	char	*src;

	dest = (char *)buf1;
	src = (char *)buf2;
	while (n--)
		*dest++ = *src++;
	return (buf1);
}
