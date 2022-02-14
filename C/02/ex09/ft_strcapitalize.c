#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}



char *ft_strcapitalize(char *str)
{
	int	i;
    int j;

	i = 0;
    j = 1;

    while (*(str + i))
    {
        if ((*(str + i) >= 'a' && *(str + i) <= 'z') && j == 1)
        {
            *(str + i) = *(str + i) - 32;
            j = 0;
        }
        i++;
        if (!(*(str + i) >= 'a' && *(str + i) <= 'z'))
        {
            j = 1;
        }
        if (*(str + i) >= '0' && *(str + i) <= '9')
        {
            j = 0;
        }
    }
    return (str);
}

int main(void)
{
    char    str[] = {"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un"};
    int i;
    char *p;

    p = ft_strcapitalize(str);

    i = 0;
    while (str[i])
    {
        ft_putchar(p[i]);
        i++;
    }

    return (0);
}
