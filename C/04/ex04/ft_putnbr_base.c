#include <unistd.h>

void	ft_if_under_zero(int nbr)
{
	char	c;

	if (nbr < 0)
	{
		c = '-';
		write(1, &c, 1);
	}
}

int	ft_base_length(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		mod;
	int		length;
	char	str[16];
	int		i;

	mod = 0;
	length = ft_base_length(base);
	if (nbr < 0)
	{
		ft_if_under_zero(nbr);
		nbr = -nbr;
	}
	i = 0;
	while (nbr > length)
	{
		mod = nbr % length;
		nbr = nbr / length;
		str[i] = base[mod];
		i++;
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i--;
	}
}
