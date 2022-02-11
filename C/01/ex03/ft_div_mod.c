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

void    ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int     main(void)
{
    int x;
    int y;
    int div;
    int mod;

    x = 1578;
    y = 100;
    div = 1;
    mod = 1;

    ft_div_mod(x, y, &div, &mod);

    ft_putnbr(x);
    ft_putchar(' ');
    ft_putnbr(y);
    ft_putchar(' ');
    ft_putnbr(div);
    ft_putchar(' ');
    ft_putnbr(mod);

    return (0);
}
