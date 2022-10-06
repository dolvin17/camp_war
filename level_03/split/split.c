/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:21:08 by dolvin17          #+#    #+#             */
/*   Updated: 2022/10/06 16:32:10 by dolvin17         ###   ########.fr       */
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
#include <stdio.h>
#include <stdlib.h>

int	ft_count_words(char *str, char c)
{
	int	n_words;
	int	i;

	i = 0;
	n_words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
			n_words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (n_words);
}

char	*ft_place_word(char const *str, char c)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	*ft_cpy_str(int small_box, char const *str, char c, char **big_box)
{
	big_box[small_box] = ft_place_word(str, c);
	if (!big_box[small_box])
	{
		while (small_box > 0)
		{
			small_box--;
			free(big_box[small_box]);
		}
		free(big_box);
		return (NULL);
	}
	return (big_box[small_box]);
}
char	**ft_split(char *str, char	c)
{
	char	**big_box;
	int		small_box;
	int		total_words;

	if (!str)
		return (NULL);
	total_words = ft_count_words(str, c);
	big_box = (char **)malloc(sizeof(char *) * total_words + 1);
	if(!big_box)
		return (NULL);
	small_box = 0;
	while (small_box < total_words)
	{
		while (*str == c)
			str++;
		if (*str != '\0')
			big_box[small_box] = ft_cpy_str(small_box, str, c, big_box);
		while (*str != c)
			str++;
		small_box++;
	}
	big_box[small_box] = 0;
	return (big_box);
}
/*
int	main(void)
{
	int		i;
	char	**tab;

	i = 0;
	tab = ft_split("buenos dias bueenas tardes buenas noches", 32);
	while (i < 7)
	{
		printf("string: %d %s\n", i, tab[i]);
		i++;
	}
	//system ("leaks a.out");
	return (0);
}*/