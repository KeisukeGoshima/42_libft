/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:18:37 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/05 11:19:48 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (size > len_dest)
	{
		while (i < len_src && len_dest + i < size)
		{
			dst[len_dest + i] = src[i];
			i++;
		}
		dst[size - 1] = '\0';
		return (len_dest + len_src);
	}
	return (size + len_src);
}
