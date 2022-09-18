/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 00:15:28 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/18 10:28:37 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that displays the number of arguments passed to it, followed by
a newline.
If there are no arguments, just display a 0 followed by a newline.
Example:
$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>*/

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int x)
{
	if (x > 9)
	{
		ft_putnbr(x / 10);
		ft_putnbr(x % 10);
	}
	else
		ft_putchar(x + '0');
}

int	main(int argc, char **argv)
{
	int	x;

	argv[1] = "0";
	x = argc - 1;
	if (x >= 0)
		ft_putnbr(x);
	ft_putchar('\n');
	return (0);
}
