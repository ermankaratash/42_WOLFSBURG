#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			temp = i + 1;
		if (temp <= i)
			return (0);
		i++;
	}
	return (1);
}


int main(void)
{
    char    str[] = {"hello world"};
    int     p;

    p = ft_str_is_lowercase(str);
        
    ft_putchar(p + '0');

    return (0);
}
