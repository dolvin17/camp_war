/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:09:19 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/17 15:48:44 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.
'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.
The output will be followed by a newline.
If the number of arguments is not 1, the program displays a newline.
Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	replacing_13_spaces_ahead(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'm'
			|| str[i] >= 'A' && str[i] <= 'M')
		{
			ft_putchar(str[i] + 13);
		}
		else if (str[i] >= 'n' && str[i] <= 'z'
			|| str[i] >= 'N' && str[i] <= 'Z')
		{
			ft_putchar(str[i] - 13);
		}
		else
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
		replacing_13_spaces_ahead(argv[1]);
	}
	else
		ft_putchar('\n');
	return (0);
}
