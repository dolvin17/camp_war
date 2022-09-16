/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 19:58:58 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/16 20:00:50 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------
Write a program that displays all digits in descending order, followed by a
newline.
Example:
$> ./ft_countdown | cat -e
9876543210$
$>
*/
#include <unistd.h>

int	main(void)
{
	write(1, "9876543210\n", 11);
	return (0);
}