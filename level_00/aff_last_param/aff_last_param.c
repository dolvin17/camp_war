/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:35:34 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/16 21:03:39 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Assignment name  : aff_last_param
Expected files   : aff_last_param.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.

Examples:

$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$
*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 0)
	{
		argc = argc -1;
		while (argv[argc][i])
		{
			if (argc >= 1)
				write(1, &argv[argc][i], 1);
					i++;
		}
		
	}
	write(1, "\n", 1);
	return (0);
}