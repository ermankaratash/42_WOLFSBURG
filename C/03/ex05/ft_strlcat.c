unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (dest[length])
		length++;
	while (src[i] && (length < size - 1))
	{
		dest[length] = src[i];
		i++;
		length++;
	}
	dest[length] = '\0';
	return (length);
}
