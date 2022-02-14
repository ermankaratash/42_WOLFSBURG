#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char *ft_strlowercase(char *str)
{
	int	i;

	i = 0;

    while (*(str + i))
    {
        if (*(str + i) >= 'A' && *(str + i) <= 'Z')
        {
            *(str + i) = *(str + i) + 32;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char    str[] = {"Hello World"};
    int i;
    char *p;

    p = ft_strlowercase(str);

    i = 0;
    while (str[i])
    {
        ft_putchar(p[i]);
        i++;
    }

    return (0);
}
