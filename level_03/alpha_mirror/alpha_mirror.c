/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 21:00:04 by dolvin17          #+#    #+#             */
/*   Updated: 2022/10/06 21:30:01 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	const char	*abc = "zyxwvutsrqponmlkjihgfedcba";
	int 		i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] = abc[argv[1][i] - 'a'];
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] = abc[argv[1][i] - 65] - 32;
			write(1 ,&argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}