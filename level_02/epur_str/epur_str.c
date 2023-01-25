/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 11:50:14 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/25 12:46:27 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		while (argv[1][i])
		{
			spaces = 0;
			if (argv[1][i] == ' ')
				spaces = 1;
			if (argv[1][i] != ' ')
				write(1, &argv[1][i], 1);
			if (spaces && argv[1][i + 1] != ' ' && argv[1][i + 1] != '\0')
				write(1, " ", 1);
			i++;
		}
	}
	write(1, "\n", 1);
}