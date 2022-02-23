char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_length;

	i = 0;
	dest_length = 0;
	while (dest[dest_length])
		dest_length++;
	while (src[i] && i < nb)
	{
		dest[dest_length] = src[i];
		dest_length++;
		i++;
	}
	dest[dest_length] = '\0';
	return (dest);
}
