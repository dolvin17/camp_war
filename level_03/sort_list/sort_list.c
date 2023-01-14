/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 15:55:34 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/14 16:47:41 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *new_lst;
	int swap;
	
	new_lst = lst;
	while (lst->next != NULL) 
	{
		//llamo a cmp y le paso el contenido del nodo a comparar.
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;//guardo el contenido del primer nodo en swap.
			lst->data = lst->next->data;//intercambio el contenido del nodo actual, por el contenido del siguiente nodo
			lst->next->data = swap;//intercambio el contenido del siguiente nodo, por el contenido del nodo actual.
			lst = new_lst;//restauro *lst al principio de la lista.
		}
		else
			lst = lst->next;
	}
	lst = new_lst;
	return (lst);
}
/*
t_list	*add_int(t_list *list, int nb)//crear una lista con un nodo de int
{
	t_list *new;

	new = (t_list*)malloc(sizeof(t_list));
	new->data = nb;//meto los int en el nodo
	new->next = list;//creo un nuevo nodo y lo añado a la lista
	return (new);
}

int		ascending(int a, int b)//compara si a <= b
{
		return (a <= b);
}

int	main(void)
{
	t_list *list;

	list = NULL;
	list = add_int(list, 9);
	list = add_int(list, 3);
	list = add_int(list, 2);
	list = add_int(list, 4);
	list = add_int(list, 1);
	list = sort_list(list, &ascending);

	while(list != NULL)//mientras haya algo en la lista.
	{
		printf("%d\n", list->data);//imprimo el contenido del nodo
		list = list->next;//apunto al siguiente.
	}
	
	return (0);
}*/