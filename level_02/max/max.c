/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:53:55 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/06 17:18:19 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------
Write the following function:
int		max(int* tab, unsigned int len);
The first parameter is an array of int, the second is the number of elements in
the array.
The function returns the largest number found in the array.
If the array is empty, the function returns 0.*/

#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	unsigned int	i;
	int position;

	i = 0;
	if (len == 0)
		return (0);
	position = tab[i];
	while (i < len)
	{
		if (tab[i] > position)
			position = tab[i];
		i++;
	}
	return (position);
}
/*
int main()
{
	int	tab[] = {-1, 5, -7, 7};
	printf("%d\n", max(tab, 0));
	return (0);
}*/