/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 12:29:02 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/08 13:37:38 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_rrange(int start, int end)
{
	int *range;
	int len;

	if (end >= start)
		len = end - start + 1;
	else
		len = start - end + 1;
	range = (int*) malloc(sizeof(int) * len);
	if (!range)
		return (NULL);
	while (len--)
	{
		if (end >= start)
			range[len] = start++;
		else
			range[len] = start--;
	}
	return (range);
}