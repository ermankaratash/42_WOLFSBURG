#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char *str)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			temp = i + 1;
		if (temp <= i)
			return (0);
		i++;
	}
	return (1);
}

int main(void)
{
    char    str[] = {"Hello World"};
    int     p;

    p = ft_str_is_printable(str);
        
    ft_putchar(p + '0');

    return (0);
}
