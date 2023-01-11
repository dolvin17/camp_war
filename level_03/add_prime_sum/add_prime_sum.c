/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:43:39 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/11 16:33:22 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int n;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		++i;
	}
	return (n);
}

void ft_putnbr(int n)
{
	char c;

	if (n < 10)
	{
		c = n + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		/* Checking if the number is a prime number. */
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	sum;
	int	n;
	
	if (argc == 2)
	{
		n = ft_atoi(argv[1]);
		sum = 0;
		while (n > 0)
		{
			if (is_prime(n--))
				sum += (n + 1);
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
