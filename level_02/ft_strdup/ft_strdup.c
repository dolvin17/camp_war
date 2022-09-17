/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dolvin17 <grks_17@hotmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 22:27:14 by dolvin17          #+#    #+#             */
/*   Updated: 2022/09/17 23:06:40 by dolvin17         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*voAssignment name  : ft_strdup
Expected files   : ft_strdup.c
Allowed functions: malloc
--------------------------------------------------------------------------------
Reproduce the behavior of the function strdup (man strdup).
Your function must be declared as follows:

char    *ft_strdup(char *src);*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*src_pointer;
	unsigned char		*dest_pointer;

	if (!dest && !src)
		return (0);
	dest_pointer = dest;
	src_pointer = src;
	while (n)
	{
		n--;
		*dest_pointer++ = *src_pointer++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*memory_reserve;
	int		len;

	len = ft_strlen(src);
	memory_reserve = malloc(sizeof(char) * (len + 1));
	if (!memory_reserve)
		return (NULL);
	ft_memcpy(memory_reserve, src, len);
	memory_reserve[len] = '\0';
	return (memory_reserve);
}
/*
int	main(void)
{
	const char	*str;
	const char	*test;

	str = ft_strdup("Marvin");
	test = strdup("Marvin");
	printf("ft_strdup: %s\n", str);
	printf("strdup: %s\n", test);
	//free(str);
	system("leaks a.out");
	return (0);
}*/
