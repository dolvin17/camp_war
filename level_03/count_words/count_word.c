/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:19:28 by dolvin17          #+#    #+#             */
/*   Updated: 2022/10/06 15:16:02 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/* Count words is a function that take a string
and count its words separated from a delimiter*/
int	count_words(char *str, char c)
{
	int	i;
	int	n_words;

	i = 0;
	n_words = 0;
	while (str[i])
	{
		while (str[i] == c && str[i] != '\0')
			i++;
			n_words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (n_words);
}
/*
int	main()
{
	char	*str;
	char	c;

	str = "Esto es un estring de prueba, tiene ocho";
	c = ' ';
	printf("%d\n", count_words(str, c));
	return (0);
}*/