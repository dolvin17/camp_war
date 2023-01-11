/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:04:42 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/11 13:36:09 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int	n;
	int i;

	i = 0;
	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		++i;
	}
	return (n);
}
void ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
		
	char c = (n % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;
	int n;

	if (argc == 2)
	{
		i = 1;
		n = ft_atoi(argv[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(n);
			write(1, " = ", 3);
			ft_putnbr(i * n);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}