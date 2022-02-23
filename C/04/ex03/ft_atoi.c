int	ft_atoi(char *str)
{
	int	i;
	int	nb;

	i = 1;
	nb = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			i = i * -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nb = nb * 10;
		nb = nb + ((int)*str - 48);
		str++;
	}
	return (i * nb);
}
