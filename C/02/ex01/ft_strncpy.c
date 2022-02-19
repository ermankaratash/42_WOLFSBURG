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

int main(void)
{
    char    src[]={"Hello World"};
    char    dest[15];
    char    *p;
    int     i;

    p = ft_strncpy(dest, src, 15);
    i = 0;
    while (i < 12)
    {
        ft_putchar(*(p + i));
        i++;
    }
    return (0);
}
