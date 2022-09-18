/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 17:05:04 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/18 17:31:41 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : do_op
Expected files   : *.c, *.h
Allowed functions: atoi, printf, write
--------------------------------------------------------------------------------
Write a program that takes three strings:
- The first and the third one are representations of base-10 signed integers
that fit in an int.
- The second one is an arithmetic operator chosen from: + - * / %
The program must display the result of the requested arithmetic operation,
followed by a newline. If the number of parameters is not 3, the program
just displays a newline.
You can assume the string have no mistakes or extraneous characters. Negative
numbers, in input or output, will have one and only one leading '-'. The
result of the operation fits in an int.
Examples:
$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	do_operation(int number_a, int number_b, char sign)
{
	if (sign == '*')
		return (number_a * number_b);
	else if (sign == '+')
		return (number_a + number_b);
	else if (sign == '-')
		return (number_a - number_b);
	else if (sign == '/')
		return (number_a / number_b);
	else if (sign == '%')
		return (number_a % number_b);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		printf("%d\n", do_operation(atoi(argv[1]), atoi(argv[3]), (argv[2][0])));
	}
	else
		write(1, "\n", 1);
	return (0);
}
