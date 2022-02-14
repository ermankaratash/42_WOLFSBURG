#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char *ft_strupcase(char *str)
{
	int	i;

	i = 0;

    while (*(str + i))
    {
        if (*(str + i) >= 'a' && *(str + i) <= 'z')
        {
            *(str + i) = *(str + i) - 32;
            /*lower and upper characters difference is 32 in ascii table*/
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

    p = ft_strupcase(str);

    i = 0;
    while (str[i])
    {
        ft_putchar(p[i]);
        i++;
    }

    return (0);
}
