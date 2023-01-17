/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 23:14:14 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/17 23:20:31 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	len;
	int *range;

	if (start >= end)
		len = start - end + 1;
	else
		len = end - start + 1;
	range = (int *)malloc(sizeof(int) * len);
	if (!range)
		return (NULL);
	while (len--)
	{
		if (start <= end)
			range[len] = end--;
		else
			range[len] = end++;
	}
	return (range);
}
/*
int	main()
{
	int	i;
	int	*tab;

	tab = ft_range(2, 5);
	i = 0;
	while (tab[i])
	{
		printf("%d\n", tab[i]);
		i++;
	}
}*/