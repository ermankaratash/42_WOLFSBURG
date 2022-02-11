#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int number)
{
	int	temp;
	int	size;

	size = 1;
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number == -2147483648)
	{
		ft_putchar('2');
		number = 147483648;
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

void    ft_swap(int *a, int *b)
{
	int temp2;

    temp2 = *a;
    *a = *b;
    *b = temp2;
}

int     main(void)
{
    int i;
    int x;

    i = 123456789;
    x = 987654321;

    ft_swap(&i, &x);

    ft_putnbr(i);
    ft_putchar(' ');
    ft_putnbr(x);
    ft_putchar('\n');

    return (0);
}
