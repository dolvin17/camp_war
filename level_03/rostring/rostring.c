/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:00:22 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/13 19:41:31 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------
Write a program that takes a string and displays this string after rotating it
one word to the left.
Thus, the first word becomes the last, and others stay in the same order.
A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.
Words will be separated by only one space in the output.
If there's less than one argument, the program displays \n.
Example:
$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring | cat -e
$
$>*/
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	start;
	int	i;
	
	if (argc > 1)
	{
		i = 0;
		while (argv[1][i] == ' ')
			i++;
		start = i;
		while (argv[1][i] && argv[1][i] != ' ')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] && argv[1][i] != ' ' && argv[1][i - 1] == ' ')
			{
				while (argv[1][i] && argv[1][i] != ' ' )
					write(1, &argv[1][i++], 1);
				write(1, " ", 1);
			}
			i++;
		}
		/* Printing the first word. */
		while (argv[1][start] && argv[1][start] != ' ')
			write(1, &argv[1][start++], 1);
	}
	write(1, "\n", 1);
	return (0);
}
