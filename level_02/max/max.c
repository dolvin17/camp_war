/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 04:16:18 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/09 04:41:02 by dolvin17         ###   ########.fr       */
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
#include <limits.h>

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int largest;

	i = 0;
	largest = INT_MIN;
	if (len == 0)
		return (0);
	while (i <= len)
	{
		if (tab[i] > largest)
			largest = tab[i];
		i++;
	}
	return (largest);
}
/*
#include <stdio.h>
int main()
{
	int	tab[]={1, 3, 5, 2, 4};
	int len = 4;
	printf("%d\n", max(tab, len));
	return (0);
}*/