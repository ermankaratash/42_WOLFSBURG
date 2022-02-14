#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

int main(void)
{
    char    src[]={"Hello World"};
    char    dest[12];
    char    *p;
    int     i;

    p = ft_strcpy(dest, src);
    i = 0;
    while (i < 12)
    {
        ft_putchar(*(p + i));
        i++;
    }
    return (0);
}