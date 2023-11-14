/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 21:59:06 by akrid             #+#    #+#             */
/*   Updated: 2023/11/13 22:20:18 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (fd > 0)
	{
		while (*s)
		{
			ft_putchar_fd(*s, fd);
			s ++;
		}
	}
}
/*
int main()
{
	int	fd = open("test.txt", O_APPEND | O_WRONLY | O_RDONLY);
	ft_putstr_fd("aboubakr", fd);
	close(fd);
	return 0;
}
*/
