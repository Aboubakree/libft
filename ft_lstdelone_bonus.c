/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:21:43 by akrid             #+#    #+#             */
/*   Updated: 2023/11/15 16:03:56 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
	{
		del((lst->content));
		free(lst);
	}
}
/*
void	fre(void	*p)
{
	t_list	*q;

	q = p;
	free(q);
}

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
	ft_lstdelone(r, &fre);
	printf("%p\n",r -> next);
	z = (r -> content);
	printf("%c\nsize : %d", *z,  ft_lstsize(li));
    free(li);
    return (0);
}
*/
