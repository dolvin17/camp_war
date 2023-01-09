/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:39:28 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/09 16:32:57 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------
Write the following function:
int     *ft_rrange(int start, int end);
It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.
Examples:
- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/
#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int	len;
	int	*tab;
	
	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	tab = (int *)malloc(sizeof(int) * len);
	if (!tab)
		return (NULL);
	while (len--)
	{
		if (end >= start)
			tab[len] = start++;
		else
			tab[len] = start--;
	}
	return (tab);
}
/*
int		main()
{
	int start;
	int end;
	int i;
	int *array;

	end = 3;
	start = 1;
	i = 0;
	array = ft_rrange(start, end);
	while(array[i])
	{
		printf("%d, ", array[i]);
		i++;
	}
}*/