/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:38:54 by dolvin17          #+#    #+#             */
/*   Updated: 2022/10/06 23:49:30 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : aff_first_param
Expected files   : aff_first_param.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes strings as arguments, and displays its first
argument followed by a \n.
If the number of arguments is less than 1, the program displays \n.
Example:
$> ./aff_first_param it is at this moment jackson knew | cat -e
it$
$> ./aff_first_param "I bet you can't print me" | cat -e
I bet you can't print me$
$> ./aff_first_param | cat -e
$
*/
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
	{
		while (argv[1][i])
			write(1, &argv[1][i++], 1);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
