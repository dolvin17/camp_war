/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:40:38 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/08 16:01:59 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flood_fill.h"
/*
tab = array 2D
size = array's size
begin = start
*/
void  flood_fill(char **tab, t_point size, t_point begin)
{
	char c;
	/* Saving the value of the first point in the variable c. */
	c = tab[begin.y][begin.x];
	tab[begin.y][begin.x] = 'F';
	begin.y++;
	if (begin.y < size.y && tab[begin.y][begin.x] == c)
		flood_fill(tab, size, begin);
	begin.y -= 2;
	if (begin.y >= 0 && tab[begin.y][begin.x] == c)
		flood_fill(tab, size, begin);
	begin.y++;
	begin.x++;
	if (begin.x < size.x && tab[begin.y][begin.x] == c)
		flood_fill(tab, size, begin);
	begin.x--;
	begin.x--;
	if(begin.x >= 0 && tab[begin.y][begin.x] == c)
		flood_fill(tab, size, begin);
}
