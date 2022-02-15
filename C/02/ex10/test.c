#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int res;

	i = 0;
	res = 0;
	while (src[res])
		res++;
	if (size < 1)
		return (res);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (res);
}

int		main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "ceci et un test tu voissss";
	size = 2;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
}