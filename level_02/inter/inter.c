/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 16:40:10 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/16 16:49:53 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.
The display will be followed by a \n.
If the number of arguments is not 2, the program displays \n.
Examples:
$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$*/
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
/* Creating an array of 256 integers and setting them all to 0. */
	int tab[256] = {0};
	if(argc == 3)
	{
		while(argv[1][i])
		{
			j = 0;
			while(argv[2][j]) // checks to see repeating characters
			{
				if(argv[2][j] == argv[1][i]) // if there is a repeating character, execute the next lines 
				{
					/* Checking to see if the character is already in the array. */
					if(tab[(int)argv[1][i]] == 0)
					{
						/* Setting the value of the character to 1. */
						tab[(int)argv[1][i]] = 1;
						write(1, &argv[2][j], 1);
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1,"\n",1);
	return (0);
}