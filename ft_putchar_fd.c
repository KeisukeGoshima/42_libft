/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:32:52 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 16:50:22 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(char));
}

// #include <fcntl.h>
// int main(void)
// {
// 	int fd;
// 	fd = open("./test", O_WRONLY);
// 	ft_putchar_fd('d', fd);
// 	return (0);
// }