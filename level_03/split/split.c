/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:21:08 by dolvin17          #+#    #+#             */
/*   Updated: 2022/10/06 15:23:44 by dolvin17         ###   ########.fr       */
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

int	ft_count_words(char *str, char c)
{
	int	n_words;
	int	i;

	i = 0;
	n_words = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c && str[i] != '\0')
			i++;
			n_words++;
		while (str[i] && str[i] != c)
			i++;
	}
	return (n_words);
}
char	**ft_split(char *str)
{
	char	**big_box;
	int		i;
	int		total_words;

	if (!str)
		return (NULL);
	total_words = ft_count_words(str);
	big_box = (char *)malloc(sizeof(char) * total_words + 1);
	if(!big_box)
		return (NULL);
	
}