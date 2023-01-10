/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 16:21:17 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/10 17:04:06 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : epur_str
Expected files   : epur_str.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes a string, and displays this string with exactly one
space between words, with no spaces or tabs either at the beginning or the end,
followed by a \n.
A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.
If the number of arguments is not 1, or if there are no words to display, the
program displays \n.
Example:
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>
$> ./epur_str " seulement          la c'est      plus dur " | cat -e
seulement la c'est plus dur$
$> ./epur_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
$
*/
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	spaces;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ')
			i++;
		while (argv[1][i] != '\0')
		{
			spaces = 0;
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
					spaces = 1;
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
				write(1, &argv[1][i], 1);
			if (spaces && argv[1][i + 1] != ' ' && argv[1][i] != '\t' && argv[1][i + 1] != '\0')
			{
				write(1, " ", 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}