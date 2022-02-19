#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hexadecimals;

	i = 0;
	hexadecimals = "0123456789abcdef";
	while (str[i])
	{
		if (!(ft_char_is_printable(str[i])))
		{
			ft_putchar('\\');
			ft_putchar(hexadecimals[str[i] / 16]);
			ft_putchar(hexadecimals[str[i] % 16]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main(void)
{
    char    str[] = {"Coucou\ntu vas bien ?"};

    ft_putstr_non_printable(str);

	char str2[] = {'0', '1', 2, 30, 16, '4', 'a', 19, 'C'};

	write(1, "\n", 1);

	ft_putstr_non_printable(str2);

    return (0);
}
