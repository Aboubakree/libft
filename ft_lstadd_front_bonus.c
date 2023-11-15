/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:09:24 by akrid             #+#    #+#             */
/*   Updated: 2023/11/14 17:24:33 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
		*lst = new;
	else
	{
		(new->next) = *lst;
		*lst = new;
	}
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
    p = NULL;
    ft_lstadd_front(&li, q);
    q = NULL;
    p = li;
    while (p)
    {
        z = (p -> content);
        //printf("content : %d\nnext : %p\n", *z, p -> next);
		printf("content : %c\nnext : %p\n", *z, p -> next);
        p = (p -> next);
    }
    free(li);
    return (0);
}
*/
