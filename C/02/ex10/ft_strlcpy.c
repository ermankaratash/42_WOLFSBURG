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

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
    int length;

	i = 0;
    length = 0;
	while (src[length])
	{
		length++;
	}
    if (size = 0)
    {
        return (length);
    }
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
    dest[i] = '\0';
	return (length);
}

int main(void)
{
    char    src[]={"Hello World"};
    char    dest[5];
    int     p;

    p = ft_strlcpy(dest, src, 5);

    ft_putnbr(p);

    return (0);
}
