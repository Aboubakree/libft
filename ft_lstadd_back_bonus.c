/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:59:05 by akrid             #+#    #+#             */
/*   Updated: 2023/11/15 11:31:39 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (*lst == NULL)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp -> next)
			temp = temp -> next;
		temp -> next = new;
	}
}
/*
int	main()
{
    t_list    *li = NULL;
    t_list    *p = NULL, *q = NULL, *r, *s;
    //int    x = 15, y = 20, *z;
	char	x = 'A', y = 'B', a = 'C', b = 'D', *z;
    p = ft_lstnew(&x);
    q = ft_lstnew(&y);
	r = ft_lstnew(&a);
	s = ft_lstnew(&b);
    //ft_lstadd_front(&li, p);
    //ft_lstadd_front(&li, q);
	ft_lstadd_back(&li, p);
	ft_lstadd_back(&li, q);
	ft_lstadd_back(&li, r);
	ft_lstadd_back(&li, s);
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
	printf("%c\nsize : %d", *z,  ft_lstsize(li));
    free(li);
    return (0);
}
*/
