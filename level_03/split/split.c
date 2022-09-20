/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:21:08 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/20 18:45:00 by dolvin17         ###   ########.fr       */
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

int	ft_count_words(char *str)
{
	int	i;
	int	num_words;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == "\n" || str[i] == '\t')
		{
			i++;
		}
		if (str[i] != '\0')
			num_words++;
		while (str[i] && str[i] != ' ' || str[i] != "\n" || str[i] != '\t')
		{
			i++;
		}
	}
	return (num_words);
}
char	**ft_split(char *str)
{
	char	**res_mem;
	int	num_words;
	int	counter;

	if (!str)
		return (NULL);
	counter = 0;
	num_words = ft_count_words(str);
	res_mem = (char **)malloc(sizeof(char *) * num_words + 1);
	if (!res_mem)
		return (NULL);
	
	

}