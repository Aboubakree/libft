/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:39:22 by akrid             #+#    #+#             */
/*   Updated: 2023/11/13 22:48:23 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int main()
{
	int	fd = open("test.txt", O_APPEND | O_WRONLY | O_RDONLY);
	ft_putendl_fd("\tgood", fd);
	close(fd);
	return 0;
}
*/
