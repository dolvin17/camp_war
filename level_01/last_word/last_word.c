/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:22:45 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/17 17:43:02 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes a string and displays its last word followed by a \n.
A word is a section of string delimited by spaces/tabs or by the start/end of
the string.
If the number of parameters is not 1, or there are no words, display a newline.
Example:
$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	print_argument(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	i = i - 1;
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	while ((str[i] != ' ' && str[i] != '\t') && i >= 0)
		i--;
	i = i + 1;
	while (str[i] && str[i] != ' ' && str[i] != '\t')
	{
		ft_putchar(str[i]);
		i++;
	}
	write(1, "\n", 1);
	return (*str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_argument(argv[argc -1]);
	}
	else
		ft_putchar('\n');
	return (0);
}
