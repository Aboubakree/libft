/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrid <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:05:14 by akrid             #+#    #+#             */
/*   Updated: 2023/11/14 21:48:56 by akrid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new -> content = content;
	new -> next = NULL;
	return (new);
}
/*
int main()
{
	t_list	*p = NULL;
	int	x = 15;

	p = ft_lstnew(&x);
	int	*z = p -> content;
	printf("content : %d\nnext : %p", *z, p -> next);
	free(p);
	return (0);
}
*/
