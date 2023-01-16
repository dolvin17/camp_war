/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 15:23:55 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/16 15:42:24 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.
A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.
If the number of parameters is not 1, or if there are no words, simply display
a newline.
Examples:
$> ./expand_str "  See? It's easy to print the same thing  " | cat -e
See?   It's   easy   to   print   the   same   thing$*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int spaces;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ')
				spaces = 1;
			if (argv[1][i] != ' ')
			{
				if (spaces)
					write(1, "   ", 3);
				spaces = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}