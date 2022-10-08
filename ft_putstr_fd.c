/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:39:44 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 09:46:31 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s));
}

// #include <fcntl.h>
// int main(void)
// {
// 	int fd;
// 	fd = open("./test", O_WRONLY);
// 	ft_putstr_fd("42tokyo", fd);
// 	return (0);
// }