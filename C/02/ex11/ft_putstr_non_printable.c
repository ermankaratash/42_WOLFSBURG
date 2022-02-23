/*it isnt correct*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_non_printable(char c)
{
	if ((c < 32 && c >= 0) || c == 127)
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
		if (ft_char_is_non_printable(str[i]))
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
