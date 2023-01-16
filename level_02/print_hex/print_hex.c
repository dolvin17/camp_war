/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 22:16:24 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/16 22:36:18 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	nbr;
	int i;

	i = 0;
	nbr = 0;
	while (str[i] != '\0')
	{
		nbr = nbr * 10;
		nbr = nbr + str[i] - '0';
		i++;
	}
	return (nbr);
}

void putnbr_hex(int nbr)
{
	char *base = "0123456789abcdef";
	
	if (nbr >= 16)
		putnbr_hex(nbr / 16);
	write(1, &base[nbr % 16], 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		putnbr_hex(ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
	return (0);
}