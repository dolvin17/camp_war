/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:47:09 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/09 05:16:33 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_list_size
Expected files   : ft_list_size.c
Allowed functions: 
--------------------------------------------------------------------------------
Write a function that returns the number of elements in the linked list that's
passed to it.
You must use the following structure in your program ft_list_size.c :
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
It must be declared as follows:
int	ft_list_size(t_list *begin_list);*/

typedef struct	s_list
{
	struct s_list *next;
	void          *data;
}	t_list;

int	ft_list_size(t_list *begin_list)
{
	int size;
	
	size = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		size++;
	}
	return (size);
}