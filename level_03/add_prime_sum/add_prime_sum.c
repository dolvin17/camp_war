/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 18:10:45 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/13 18:52:58 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------
Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.
If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.
Yes, the examples are right.
Examples:
$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>*/
#include <unistd.h>
int	ft_atoi(char *input)
{
	int	len;
	int	nbr;
	
	len = 0;
	while (input[len] >= '0' && input[len] <= '9')
	{
		nbr = nbr * 10 + (input[len] - '0');
		len++;
	}
	return (nbr);
}
void	ft_putnbr(int	input)
{
	char c;
	
	if (input < 10)
	{
		c = input + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(input / 10);
		ft_putnbr(input % 10);
	}
}

int	is_prime(int	input)
{
	int	prime;

	prime = 2;
	if (input <= 1)
		return (0);
	while (prime < input)
	{
		if (input % prime == 0)
			return (0);
		prime++;
	}
	return (1);

}

int	main(int argc, char **argv)
{
	int	input;
	int	sum;
	
	if (argc == 2)
	{
		input = ft_atoi(argv[1]);
		sum = 0;
		while (input > 0)
		{
			if (is_prime(input--))
				sum = sum + (input + 1);
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}