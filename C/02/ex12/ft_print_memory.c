#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

void	ft_content(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 && str[i] >= 0)
			str[i] = '.';
		ft_putchar(str[i]);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int		i;
	int		temp;
	char	*str;
	char	*hexadecimals;
	char	*dest;

	i = 0;
	temp = 0;
	hexadecimals = "0123456789abcdef";
	dest = addr;
	str = ft_strncpy(dest, addr, size);
	write(1, addr, size);
	ft_putchar(':');
	ft_putchar(' ');
	while (str[i])
	{
		ft_putchar(hexadecimals[str[i] / 16]);
		ft_putchar(hexadecimals[str[i] % 16]);
		i++;
		temp++;
		if (temp % 2 == 0)
			ft_putchar(' ');
	}
	ft_content(str);
	return (addr);
}


int	main(void)
{
	char *str = "Bonjour les aminches\n\b\rc  est fou\ntout\rce qu on peut faire avec\r\r\nprint_memory\n\n\r\blol\rlol\r \b";

	ft_print_memory(str, strlen(str));
	return (0);
}
