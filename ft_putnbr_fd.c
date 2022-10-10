/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:47:27 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/10 11:16:25 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static void	setnumber(long n, long div, int fd)
{
	long	a;
	long	b;

	a = n / div + '0';
	b = n % div;
	div /= 10;
	write(fd, &a, 1);
	if (div != 0)
		setnumber(b, div, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long	num;
	long	div;

	if (fd < 0)
		return ;
	num = n;
	if (num == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	else if (num < 0)
	{
		write(fd, "-", 1);
		num *= -1;
	}
	div = 1;
	while (num >= div)
		div *= 10;
	div /= 10;
	setnumber(num, div, fd);
}

// #include <fcntl.h>
// int main(void)
// {
// 	int fd;
// 	fd = open("./test", O_WRONLY);
// 	ft_putnbr_fd(0, fd);
// 	return (0);
// }