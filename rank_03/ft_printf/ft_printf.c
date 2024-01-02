
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		while (str[i] != '\0')
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	return (i);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	nbrlen(int nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		len = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		len ++;
	}
	return (len);
}

int	putnbr(int nbr, char *base)
{
	if (nbr == INT_MIN)
		write(1, "-2147483648", 11);
	else if (nbr < 0)
	{
		ft_putchar('-');
		putnbr(nbr * -1, base);
	}
	else if (nbr < 10)
		ft_putchar(nbr + '0');
	else
	{
		putnbr(nbr / 10, base);
		ft_putchar(nbr % 10 + '0');
	}
	return (nbrlen(nbr));
}

int	ft_hex_len(unsigned long nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		len = 1;
	else if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr != 0)
	{
		nbr /= 16;
		len++;
	}
	return (len);
}

int	put_hex(unsigned long nbr, char *base)
{
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		ft_putchar('-');
		put_hex(nbr * -1, base);
	}
	else if (nbr < base_len)
		ft_putchar(base[nbr]);
	else
	{
		put_hex(nbr / base_len, base);
		ft_putchar(base[nbr % base_len]);
	}
	return (ft_hex_len(nbr));
}

int	list_args(va_list args, char format)
{
	int	counter;

	counter = 0;
	if (format == 's')
		counter += ft_putstr(va_arg(args, char *));
	if (format == 'd')
		counter += putnbr(va_arg(args, int), "0123456789");
	if (format == 'x')
		counter += put_hex(va_arg(args, unsigned), "0123456789abcdef");
	return (counter);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		counter;

	counter = 0;
	i = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			counter = counter + list_args(args, format[i + 1]);
			i++;
		}
		else
			counter = counter + ft_putchar(format[i]);
			i++;
	}
	va_end(args);
	return (counter);
}

int	main(void)
{
	/*unsigned int	i;
	int				over;
	int				under;*/
	int				nbr;
	char			*str;

	str = "number";
	nbr = 42;
	/*i = 4234239232;
	over = INT_MAX;
	under = INT_MIN;

	printf("hex: %x\n", 42);
	ft_printf("hex: %x\n", 42);
	ft_printf("hex: %x\n", i);
	printf("hex: %x\n", i);
	ft_printf("int: %d\n", nbr);
	printf("int: %d\n", nbr);
	ft_printf("string: %s\n", str);
	printf("string: %s\n", str);
	ft_printf("under: %d\n", under);
	printf("under: %d\n", under);
	ft_printf("over: %d\n", over);
	printf("over: %d\n", over);
	ft_printf("cero: %d\n", 0);
	printf("cero: %d\n", 0);*/
	printf("Magic %d is %s\n", nbr, str);
	ft_printf("Magic %d is %s\n", nbr, str);
}
