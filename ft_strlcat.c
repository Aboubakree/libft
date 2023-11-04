/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:22:13 by akrid             #+#    #+#             */
/*   Updated: 2023/11/03 23:24:20 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (dst == NULL)
		return (src_len + dstsize);
	j = ft_strlen(dst);
	dst_len = j;
	if (dst_len >= dstsize)
		return (src_len + dstsize);
	while (j < dstsize - 1 && src[i])
	{
		dst[j] = src[i];
		j ++;
		i ++;
	}
	dst[j] = '\0';
	return (src_len + dst_len);
}
