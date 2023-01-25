/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 12:54:30 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/25 13:01:58 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------
Write a function that determines if a given number is a power of 2.
This function returns 1 if the given number is a power of 2, otherwise it returns 0.
Your function must be declared as follows:
int	is_power_of_2(unsigned int n);*/
#include <unistd.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	if (n % 2 == 0 || n == 1)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", is_power_of_2(0));
	printf("%d", is_power_of_2(1));
	printf("%d", is_power_of_2(2));
	printf("%d", is_power_of_2(7));
	
}*/