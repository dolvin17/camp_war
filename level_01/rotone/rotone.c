/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:32:18 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/17 13:56:03 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.

Example:
$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	replacing_by_next_letter(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] < 'Z')
			ft_putchar(str[i] + 1);
		else if (str[i] == 'Z')
			ft_putchar('A');
		else if (str[i] >= 'a' && str[i] < 'z')
			ft_putchar(str[i] + 1);
		else if (str[i] == 'z')
			ft_putchar('a');
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		replacing_by_next_letter(argv[1]);
	}
	else
		ft_putchar('\n');
	return (0);
}
