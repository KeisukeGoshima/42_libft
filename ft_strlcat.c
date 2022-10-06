/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:18:37 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/06 10:17:54 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	if (dst == NULL)
		len_dest = 0;
	else
		len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (size > len_dest + 1)
	{
		while (i < len_src && len_dest + 1 + i < size)
		{
			dst[len_dest + i] = src[i];
			i++;
		}
		dst[len_dest + i] = '\0';
		return (len_dest + len_src);
	}
	return (size + len_src);
}
