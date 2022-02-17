#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_alpha_lower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_alpha_upper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

int	ft_char_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (ft_char_is_alpha_lower(str[i]) && j == 1)
		{
			str[i] = str[i] - 32;
			j = 0;
			i++;
		}
		while (str[i] && ft_char_is_alpha(str[i]))
		{
			if (ft_char_is_alpha_upper(str[i]) && j == 0)
				{
					str[i] = str[i] + 32;			
				}
			i++;
		}
		j = 1;
		if (ft_char_is_numeric(str[i]))
		{
			j = 0;
		}
		i++;
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
