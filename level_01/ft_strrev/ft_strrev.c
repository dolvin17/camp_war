/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 18:07:18 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/17 18:32:26 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions: 
--------------------------------------------------------------------------------
Write a function that reverses (in-place) a string.
It must return its parameter.
Your function must be declared as follows:
char    *ft_strrev(char *str);*/
#include <stdio.h>

char	*ft_strrev(char *str)
{
	char	aux;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	j = j - 1;
	while (i < j)
	{
		aux = str[i];
		str[i] = str[j];
		str[j] = aux;
		i++;
		j--;
	}
	return (str);
}

/*
int	main()
{
	char	str[]= "Hola mundo!";

	printf("before: %s\n", str);
	ft_strrev(str);
	printf("after: %s\n", str);
	return (0);
}*/