/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 21:28:11 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/16 21:47:28 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : maff_revalpha
Expected files   : maff_revalpha.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.
Example:
$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$*/

#include <unistd.h>

int	main(void)
{
	char	a;
	char	b;

	a = 'z';
	b = 'Y';
	while (a >= 'a' && b >= 'A')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a = a - 2;
		b = b - 2;
	}
	write(1, "\n", 1);
	return (0);
}