/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoshima <kgoshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:47:27 by kgoshima          #+#    #+#             */
/*   Updated: 2022/10/08 11:21:45 by kgoshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	setnumber(int n, int extra, long div, int fd)
{
	int		a;
	int		b;

	a = n / div + '0';
	b = n % div;
	div /= 10;
	if (div == 0 && extra)
		a++;
	write(fd, &a, 1);
	if (div != 0)
		setnumber(b, extra, div, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		extra;
	long	div;

	extra = 0;
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		if (n == -2147483648)
		{
			extra = 1;
			n += 1;
		}
		n *= -1;
	}
	div = 1;
	while (n >= div)
		div *= 10;
	div /= 10;
	setnumber(n, extra, div, fd);
}

// #include <fcntl.h>
// int main(void)
// {
// 	int fd;
// 	fd = open("./test", O_WRONLY);
// 	ft_putnbr_fd(0, fd);
// 	return (0);
// }