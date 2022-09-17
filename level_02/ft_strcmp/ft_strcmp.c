/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 23:10:10 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/17 23:29:44 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions: 
--------------------------------------------------------------------------------
Reproduce the behavior of the function strcmp (man strcmp).
Your function must be declared as follows:
int    ft_strcmp(char *s1, char *s2);*/
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i])
	{
		if (str1[i] != str2[i] || !str1[i])
		{
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char str1[] = "Once 42";
	char str2[] = "Once 43";
	
	printf("mine: %d\n", ft_strcmp(str1, str2));
	printf("original: %d\n", strcmp(str1, str2));
	return (0);
}*/
