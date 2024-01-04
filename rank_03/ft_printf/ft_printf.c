
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

void	ft_putstr(char *str, int *len)
{
	if (!str)
		str = "(null)";
	while (*str)
		*len += write(1, str++, 1);
}

void	ft_putnbr(long long int nbr, int *len, int base)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr == INT_MIN)
	{
		*len += write(1, "-2147483648", 11);
		return ;
	}
	if (nbr < 0)
	{
		nbr *= -1;
		*len += write(1, "-", 1);
	}
	if (nbr >= base)
		ft_putnbr((nbr / base), len, base);
	*len += write(1, &hex[nbr % base], 1);
}

int	ft_printf(char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
				ft_putstr(va_arg(args, char *), &len);
			else if (*format == 'd')
				ft_putnbr((long long int)va_arg(args, int), &len, 10);
			else if (*format == 'x')
				ft_putnbr((long long int)va_arg(args, unsigned), &len, 16);
		}
		else
			len += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (len);
}

/*
int	main(void)
{
	unsigned int	i;
	int				nbr;
	char			*str;

	str = "number";
	nbr = 42;
	i = 4234239232;

	printf("hex: %x\n", 42);
	ft_printf("hex: %x\n", 42);
	ft_printf("hex: %x\n", i);
	printf("hex: %x\n", i);
	ft_printf("int: %d\n", nbr);
	printf("int: %d\n", nbr);
	ft_printf("string: %s\n", str);
	printf("string: %s\n", str);
	ft_printf("under: %d\n", INT_MIN);
	printf("under: %d\n", INT_MIN);
	ft_printf("over: %d\n", INT_MAX);
	printf("over: %d\n", INT_MAX);
	ft_printf("cero: %d\n", 0);
	printf("cero: %d\n", 0);
	printf("Magic %d is %s\n", nbr, str);
	ft_printf("Magic %d is %s\n", nbr, str);
}*/