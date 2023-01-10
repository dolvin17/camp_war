/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:51:56 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/10 16:17:00 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	i;
	int argv1 = 0;
	int argv3 = 0;
	
	i = 0;
	if (argc == 4)
	{
		argv1 = (atoi(argv[1]));
		argv3 = (atoi(argv[3]));
		if (argv[2][i] == '*')
			printf("%d\n", (argv1 * argv3));
		if (argv[2][i] == '+')
			printf("%d\n", (argv1 + argv3));
		if (argv[2][i] == '-')
			printf("%d\n", (argv1 - argv3));
		if (argv[2][i] == '/')
			printf("%d\n", (argv1 / argv3));
		if (argv[2][i] == '%')
			printf("%d\n", (argv1 % argv3));
	}
	else
		write(1, "\n", 1);
	return (0);
}