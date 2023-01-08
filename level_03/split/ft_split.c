/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:16:41 by dolvin17          #+#    #+#             */
/*   Updated: 2023/01/08 20:20:01 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------
Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.
A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.
Your function must be declared as follows:
char    **ft_split(char *str);*/
#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char	**ft_split(char *str)
{
	char	**total_words;
	int		i;
	int		j;
	int		word;
	int		len_str;

	word = 0;
	len_str = ft_strlen(str + 1);
	total_words = (char **)malloc(sizeof(char *) * len_str);
	if (!total_words)
		return (NULL);
	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i])
	{
		j = 0;
		total_words[word] = (char *)malloc(sizeof(char) * 4090);
		if (!total_words)
			return (NULL);
		while (str[i] != ' ' && str[i])
		{
			//asigno una palabra a la reserva de memoria.
			total_words[word][j++] = str[i++];
		}
		while (str[i] == ' ')
			i++;
		//cierro la palabra con '\0'
		total_words[word][j] = '\0';
		//incremento palabra en 1 y paso a la siguiente.
		word++;
	}
	total_words[word] = NULL;
	return (total_words);
}
/*
int	main(void)
{
	int		i;
	char	**tab;
	i = 0;
	tab = ft_split("buenos dias bueenas tardes buenas noches");
	while (i < 7)
	{
		printf("string: %d %s\n", i, tab[i]);
		i++;
	}
	//system ("leaks a.out");
	return (0);
}*/