/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 10:20:22 by akrid             #+#    #+#             */
/*   Updated: 2023/11/14 10:43:18 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s != NULL || f != NULL)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i ++;
		}
	}
}
/*
void upper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z' && i >= 0)
		 *c = *c - 32;
}

int	main()
{
	char r[] = "aboubakr";

	ft_striteri(r, &upper);
	printf("%s",r);
}
*/
