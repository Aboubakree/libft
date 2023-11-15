/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:25:53 by akrid             #+#    #+#             */
/*   Updated: 2023/11/15 13:16:04 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	ng;
	int	res;

	ng = 1;
	res = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str ++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			ng = -ng;
		str ++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res *= 10;
		res += *str - '0';
		str ++;
	}
	return (res * ng);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()

{
	printf("mine ; %d\nSTANDARD : %d", ft_atoi("2147483648"), atoi("2147483648"));
}
*/
