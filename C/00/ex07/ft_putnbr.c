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
        /*we write - at firs if number<0 then we equal to number positive so that our loop run easily*/
		number = -number;
	}
	if (number == -2147483648)
    /* -(-2147483648) = -2147483648 
    ref=https://stackoverflow.com/questions/42462352/why-is-2147483648-2147483648-in-a-32-bit-machine/42462712
    so we need to write something special for that number*/
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
        /*48 is because in ascii table it equals 0, look at it in decimal numbers*/
		temp %= size;
		size /= 10;
	}
}

int	main(void)
{
	ft_putnbr(42);
    return (0);
}
