int	ft_str_is_numeric(char *str)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			temp = i + 1;
		}
		if (temp <= i)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
