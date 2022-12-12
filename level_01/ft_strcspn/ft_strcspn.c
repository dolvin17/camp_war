/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghuertas <ghuertas@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:34:29 by ghuertas          #+#    #+#             */
/*   Updated: 2022/12/06 13:18:18 by ghuertas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

/*Cuenta el número de chars de un string inicial (str) (hasta el indice de reject),
siempre que no contenga ninguno de los caracteres existentes en (reject).

Return value: Si no hay coincidencias, retorna la longitud total de str
Return value: Si reject, es un string vacío, retorna la longitud total de str
Return value: Si reject, es un string NULL, el comportamiento es indefinido.
Retunr value: Si la coincidencia es completa, (str == reject) retorna 0 */

size_t	ft_strcspn(const char *str, const char *reject)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (str[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int main (void)
{
	printf("My own function: %zu\n", ft_strcspn("holamundo", "m"));
	printf("The Original one: %lu\n", strcspn("holamundo", "m"));
	printf("My own function: %zu\n", ft_strcspn("Marvin", "x"));
	printf("The Original one: %lu\n", strcspn("Marvin", "x"));
	printf("My own function: %zu\n", ft_strcspn("Gatito", "o"));
	printf("The Original one: %lu\n", strcspn("Gatito", "o"));
	printf("My own function: %zu\n", ft_strcspn("Meaning", "Meaning"));
	printf("The Original one: %lu\n", strcspn("Meaning", "Meaning"));
	printf("My own function: %zu\n", ft_strcspn("life", ""));
	printf("The Original one:%lu\n", strcspn("life", ""));
	return (0);
}*/