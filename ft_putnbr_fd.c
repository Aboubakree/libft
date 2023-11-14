/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:54:16 by akrid             #+#    #+#             */
/*   Updated: 2023/11/14 09:15:20 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = -nbr;
	}
	if (nbr > 9 && fd > 0)
	{
		ft_putnbr_fd(nbr / 10, fd);
		ft_putnbr_fd(nbr % 10, fd);
	}
	else if (fd > 0)
		ft_putchar_fd(nbr + '0', fd);
}
/*
int main()
{
	int	fd = open("test.txt", O_APPEND | O_WRONLY);
	ft_putnbr_fd(-2147483648, fd);
	close(fd);
	return 0;
}
*/
