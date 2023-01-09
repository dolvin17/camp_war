/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 05:19:14 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/09 06:06:08 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------
Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.
Your function must be declared as follows:
char	*ft_itoa(int nbr);*/
#include <stdlib.h>
size_t	ft_num_len(int number)
{
	int	len;

	len = 0;
	if (number == 0)
		len = 1;
	if (number < 0)
	{
		number = number * -1;
		len++;
	}
	while (number != 0)
	{
		number = number / 10;
		len++;
	}
	return (len);
}
char	*ft_itoa(int nbr)
{
	char	*n_str;
	size_t	len;

	len = ft_num_len(nbr);
	n_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!n_str)
		return (NULL);
	n_str[len--] = '\0';
	if (nbr == 0)
		n_str[len] = '0';
	if (nbr < 0)
	{
		n_str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		n_str[len--] = '0' + (nbr % 10);
		nbr = nbr / 10; 
	}
	return (n_str);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_itoa(123156));
	return (0);
}*/