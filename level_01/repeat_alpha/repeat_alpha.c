/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 20:02:43 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/11 20:24:46 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] && argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				j = argv[1][i] - 'A';
				while (j >= 0)
				{
					write(1, &argv[1][i], 1);
					j--;
				}
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				j = argv[1][i] - 'a';
				while (j >= 0)
				{
					write(1, &argv[1][i], 1);
					j--;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}