#include <unistd.h>

void	print_number(int n)
{
	if (n > 9)
	{
		write(1, &"0123456789"[n / 10], 1);
		write(1, &"0123456789"[n % 10],  1);
	}
	else
		write(1, &"0123456789"[n], 1);

}


int	main(void)
{
	int	n;

	n = 1;
	while (n < 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (n % 3 == 0)
			write(1, "fizz", 4);
		else if (n % 5 == 0)
			write(1, "buzz", 4);
		else
			print_number(n);
		write(1, "\n", 1);
		n++;
		if (n == 100)
			write(1, "buzz\n", 5);
	}

	return (0);
}