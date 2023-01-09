/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 07:46:56 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/09 08:08:26 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>

/* this function takes two arguments:
a pointer to a list
a pointer to a function cmp. */
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int	swap;
	t_list	*temp;
	
	temp = lst;
	/* Checking if the next node is NULL. */
	while (lst->next != NULL)
	{
		/* Calling the function cmp
		and passing the data of the current node
		and the next node. */
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			/* Storing the data of the current node in a variable called swap. */
			swap = lst->data;
			/* Swapping the data of the current node with the data of the next node. */
			lst->data = lst->next->data;
			/* Swapping the data of the current node with the data of the next node. */
			lst->next->data = swap;
			/* Setting the pointer `lst` back to the beginning of the list. */
			lst = temp;
		}
		else
			/* Moving the pointer to the next node. */
			lst = lst->next;
	}
	/* Setting the pointer `lst` back to the beginning of the list. */
	lst = temp;
	return (lst);
}