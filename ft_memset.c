/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 08:55:51 by akrid             #+#    #+#             */
/*   Updated: 2023/11/04 10:16:59 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*tem;

	i = 0;
	tem = b;
	if (tem == NULL)
		return (NULL);
	while (i < len)
	{
		tem[i] = c;
		i ++;
	}
	return (b);
}

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//printf("%c",ft_tolower('A'));
char buffer1[10];
char buffer2[10];
int c = 'B';  // ASCII value of 'B'
size_t size = 0;

memset(buffer1, c, size);
ft_memset(buffer2, c, size);

// Compare the results (no memory is modified)
if (memcmp(buffer1, buffer2, sizeof(buffer1)) == 0) {
    printf("Test case 4 passed.\n");
} else {
    printf("Test case 4 failed.\n");
}

}
