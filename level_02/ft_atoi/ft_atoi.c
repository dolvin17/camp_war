/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 23:31:26 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/17 23:58:20 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------
Write a function that converts the string argument str to an integer (type int)
and returns it.
It works much like the standard atoi(const char *str) function, see the man.
Your function must be declared as follows:
int	ft_atoi(const char *str);*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}
int	ft_atoi(const char *str)
{
	unsigned long int	number;
	int					sign;
	int					i;

	number = 0;
	sign = 1;
	while (str[i] == 32 || str[i] >= 9 && str[i] <= 13)
		i++;
	if (str[i] == '-')
		sign = sign * -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
	{
		number = number * 10 + (str[i] - '0');
		if (number > 9223372036854775808UL && sign == -1)
			return (0);
		if (number > 9223372036854775807UL && sign == 1)
			return (-1);
		i++;
	}
	return (number * sign);
}

int	main(void)
{
	const char	test1[] = "		4693"; //tiene whitespaces al inicio
	const char	test2[] = "-4693"; //tiene signo - al inicio
	const char	test3[] = "+493"; // tiene signo + al inicio
	const char	test4[] = "+-----4982"; // tiene mas de 2 signos al inicio
	const char	test5[] = "a493"; // tiene letras al inicio
	const char	test6[] = "@493"; //tiene simbolos al inicio
	const char	test7[] = "43-32456"; //tiene simbolos en el medio
	const char	test8[] = "-56 5 2-876";//tiene simbolos en medio
	const char	test9[] = "\7893";//tiene un caracter no imprimible al inicio
	printf("Original: %i\n", atoi(test1));
	printf("Mine: %i\n", ft_atoi(test1));
	printf("Original: %i\n", atoi(test2));
	printf("Mine: %i\n", ft_atoi(test2));
	printf("Original: %i\n", atoi(test3));
	printf("Mine: %i\n", ft_atoi(test3));
	printf("Original: %i\n", atoi(test4));
	printf("Mine: %i\n", ft_atoi(test4));
	printf("Original: %i\n", atoi(test5));
	printf("Mine: %i\n", ft_atoi(test5));
	printf("Original: %i\n", atoi(test6));
	printf("Mine: %i\n", ft_atoi(test6));
	printf("Original: %i\n", atoi(test7));
	printf("Mine: %i\n", ft_atoi(test7));
	printf("Original: %i\n", atoi(test8));
	printf("Mine: %i\n", ft_atoi(test8));
	printf("Original: %i\n", atoi(test9));
	printf("Mine: %i\n", ft_atoi(test9));
	return (0);
}