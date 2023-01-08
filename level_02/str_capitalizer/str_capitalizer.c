/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 10:08:59 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/08 11:31:07 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void str_capitalizer(char *str)
{
	int	i;

	i = 0;
	// si la primera letra es lowercase, convierto en uppercase
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
		write(1, &str[i], 1);
	//mientras itero str, 
	//si hay uppercase, convierto en lowercase
	//si hay lowercase && str en la pos anterior es un espacio, convierto en uppercase
	while (str[++i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && str[i - 1] == ' ')
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
	}
}
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}