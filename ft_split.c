/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 13:17:35 by akrid             #+#    #+#             */
/*   Updated: 2023/11/12 14:01:48 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	count;
	int	b;

	i = 0;
	count = 0;
	b = 1;
	while (s[i] && s[i] == c)
		i ++;
	while (s[i])
	{
		if (s[i] != c && b)
		{
			count ++;
			b = 0;
		}
		if (s[i] == c)
			b = 1;
		i ++;
	}
	return (count);
}



char	**ft_split(char const *s, char c)
{
	
}


int main()
{
	printf("%d",count_words("", '\0'));
}
