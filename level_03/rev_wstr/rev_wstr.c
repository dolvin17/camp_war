/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 17:08:48 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/07 18:41:43 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rev_wstr
Expected files   : rev_wstr.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------
Write a program that takes a string as a parameter, and prints its words in 
reverse order.
A "word" is a part of the string bounded by spaces and/or tabs, or the 
begin/end of the string.
If the number of parameters is different from 1, the program will display 
'\n'.
In the parameters that are going to be tested, there won't be any "additional" 
spaces (meaning that there won't be additionnal spaces at the beginning or at 
the end of the string, and words will always be separated by exactly one space).
Examples:
$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$*/
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	start;
	int	end;
	int	i;
	int checker_space;
	int init_str;

	i = 0;
	init_str = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		while (i >= 0)
		{
			while (argv[1][i] == '\0' || argv[1][i] == ' ')
				i--;
			end = i;
			while (argv[1][i] && argv[1][i] != ' ')
				i--;
			start = i + 1;
			checker_space = start;
			while (start <= end)
			{
				write(1, &argv[1][start], 1);
				start++;
			}
			if (checker_space != init_str)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}