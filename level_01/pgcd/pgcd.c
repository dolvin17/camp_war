/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:22:38 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/23 14:35:43 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int prime;
	int input1;
	int	input2;
	int	nbr;
	
	prime = 2;
	if (argc == 3)
	{
		input1 = atoi(argv[1]);
		input2 = atoi(argv[2]);
		if (input1 > 0 && input2 > 0)
		{
			while (input1 != input2)
			{
				if (input1 > input2)
					input1 = input1 - input2;
				else
					input2 = input2 - input1;
			}
			printf("%d", input1);
		}
		
	}
	printf("\n");
	return (0);
}