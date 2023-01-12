/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:54:44 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/12 15:30:24 by dolvin17         ###   ########.fr       */
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
#include <unistd.h>
void	ft_write(int argc)
{
	if (argc > 9)
	{
		write(1, &"0123456789"[argc / 10], 1);
		write(1, &"0123456789"[argc % 10], 1);
	}
	else
		write(1, &"0123456789"[argc], 1);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (argv[argc])
			argc++;
		argc = argc -1;
		ft_write(argc);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}