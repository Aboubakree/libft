/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:17:14 by akrid             #+#    #+#             */
/*   Updated: 2023/11/13 22:21:57 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd > 0)
	{
		write(fd, &c, 1);
	}
}
/*
int main()
{
	int	fd = open("test.txt", O_APPEND | O_WRONLY);
	ft_putchar_fd('B', fd);
	close(fd);
	return 0;
}
*/
