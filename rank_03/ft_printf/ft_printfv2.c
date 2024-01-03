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

void	putnbr(long long int nbr, int base, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (nbr == INT_MIN)
	{
		*len += write(1, "-2147483648", 11);
		return ;
	}
	else if (nbr < 0)
	{
		nbr *= -1;
		*len += write(1, "-", 1);
	}
	if (nbr >= base)
		putnbr((nbr / base), base, len);
	*len += write(1, &hex[nbr % base], 1);
}


int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		counter;

	counter = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
				ft_putstr(va_arg(args, char *), &counter);
			else if (*format == 'd')
				putnbr((long long int)va_arg(args, int), 10, &counter);
			else if (*format == 'x')
				putnbr((long long int)va_arg(args, unsigned), 16, &counter);
		}
		else
			counter += write(1, format, 1);
		format++;
	}
	va_end(args);
	return (counter);
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

