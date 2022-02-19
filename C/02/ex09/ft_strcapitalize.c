#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_alpha_numeric(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && !ft_char_is_alpha_numeric(str[i]))
			i++;
		if (str[i] && ((str[i] >= 'a') && (str[i] <= 'z')))
			str[i] = (str[i] - 32);
		i++;
		while (str[i] && ft_char_is_alpha_numeric(str[i]))
		{
			if (((str[i] >= 'A') && (str[i] <= 'Z')))
				str[i] = (str[i] + 32);
			i++;
		}
	}
	return (str);
}

int main(void)
{
    char    str[] = {"-[I=A@)T@:E)9CFSqx;$F0';Q#R2YL^T&K$saLuT, Comment tu vas ? 42mots quarante-deux; cinquante+et+un\n"};
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
