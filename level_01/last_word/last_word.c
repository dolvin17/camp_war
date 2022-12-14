/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 19:04:27 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/07 19:54:59 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
			i++;
		i = i - 1;
		while (argv[1][i] == ' ' && i != 0)
			i--;
		while (argv[1][i] != ' ' && i != 0)
			i--;
		if (argv[1][i] == ' ')
			i++;
		while (argv[1][i] != '\0' && argv[1][i] != ' ')
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}