#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_under_zero(int number)
{
	ft_putchar('-');
	if (number == -2147483648)
	{
		ft_putchar('2');
		number = 147483648;
	}
	else
	{
		number = -number;
	}
	return (number);
}

void	ft_putnbr(int number)
{
	int	temp;
	int	size;

	size = 1;
	if (number < 0)
	{
		number = ft_check_under_zero(number);
	}
	temp = number;
	while ((temp / 10) > 0)
	{
		temp = temp / 10;
		size *= 10;
	}
	temp = number;
	while (size)
	{
		ft_putchar((char)((temp / size)) + 48);
		temp %= size;
		size /= 10;
	}
}
