/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:25:30 by akrid             #+#    #+#             */
/*   Updated: 2023/11/14 17:38:21 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i ++;
		lst = (lst -> next);
	}
	return (i);
}
/*
int main()
{

    t_list    *li = NULL;
    t_list    *p = NULL, *q = NULL;
    //int    x = 15, y = 20, *z;
	char	x = 'A', y = 'B', *z;
    p = ft_lstnew(&x);
    q = ft_lstnew(&y);
    ft_lstadd_front(&li, p);
    ft_lstadd_front(&li, q);
    p = li;
    while (p)
    {
        z = (p -> content);
        //printf("content : %d\nnext : %p\n", *z, p -> next);
		printf("content : %c\nnext : %p\n", *z, p -> next);
        p = (p -> next);
    }
	printf("%d\n", ft_lstsize(p));
    free(li);
    return (0);
}
*/
