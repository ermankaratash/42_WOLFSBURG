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

int	ft_strlen(char *str)
{	
	int		i;

	i = 0;
	while (str[i] != '\0')
	{	
		i++;
	}
    return (i);
}

int main(void)
{
    char    str[] = {"Hello"};

    ft_putnbr(ft_strlen(str));

    return (0);
}
