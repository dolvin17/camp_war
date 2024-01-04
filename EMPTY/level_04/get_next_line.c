
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

char	*ft_strchr(char	*str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char	*dest, char const *src, size_t destsize)
{
	size_t	i;
	size_t	src_size;

	i = 0;
	src_size = ft_strlen(src);
	if (destsize > 0)
	{
		while (i < src_size && i < destsize -1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_size);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src) + 1;
	dest = malloc(len);
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, src, len);
	return (dest);
}

char	*ft_strjoin(char *str1, char *str2, size_t len)
{
	char	*join;
	size_t	first_len;
	size_t	second_len;

	first_len = ft_strlen(str1);
	second_len = len;
	join = (char *)malloc(sizeof(char *) * (first_len + second_len + 1));
	if (!join)
		return (NULL);
	ft_strlcpy(join, str1, first_len +1);
	ft_strlcpy((join + first_len), str2, second_len +1);
	free(str1);
	return (join);
}

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE + 1];
	char		*line;
	char		*new_line;
	int			to_copy;
	int			readed;

	line = ft_strdup(buf);
	while (!(ft_strchr(line, '\n')) && (readed = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		buf[readed] = '\0';
		line = ft_strjoin(line, buf, readed);
	}
	if (ft_strlen(line) == 0)
		return (free(line), NULL);
	new_line = ft_strchr(line, '\n');
	if (new_line != NULL)
	{
		to_copy = new_line - line + 1;
		ft_strlcpy(buf, new_line + 1, BUFFER_SIZE + 1);
	}
	else
	{
		to_copy = ft_strlen(line);
		ft_strlcpy(buf, "", BUFFER_SIZE +1);
	}
	line[to_copy] = '\0';
	return (line);
}
