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

void    ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int     main(void)
{
    int i;

    i=1;

    int *********a;
    int ********b;
    int *******c;
    int ******d;
    int *****e;
    int ****f;
    int ***g;
    int **h;
    int *j;

    a = &b;
    b = &c;
    c = &d;
    d = &e;
    e = &f;
    f = &g;
    g = &h;
    h = &j;

    j = &i;

	ft_ultimate_ft(a);

    ft_putnbr(i);

    return (0);
}
