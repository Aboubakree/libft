/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:39:23 by akrid             #+#    #+#             */
/*   Updated: 2023/11/14 21:29:52 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}
/*
int	main()
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
	p = ft_lstlast(li);
	z = (p -> content);
	printf("%c\nsize : %d", *z,  ft_lstsize(p));
    free(li);
    return (0);
}
*/
