/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:19:22 by akrid             #+#    #+#             */
/*   Updated: 2023/11/12 11:21:52 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*join;

	len = ft_strlen(s1) + ft_strlen(s2);
	join = (char *)malloc((len + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i ++;
	}
	j = 0;
	while (s2[j])
		join[i ++] = s2[j ++];
	join[i] = '\0';
	return (join);
}
