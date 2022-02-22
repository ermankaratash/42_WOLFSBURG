#include <unistd.h>

void	ft_putchar(char *c)
{

		write(1, c, 1);
}

int	ft_mod(int nbr)
{
	int	temp;
	int	mod;

	mod = 1;
	temp = nbr;
	while (temp / 10 > 0)
	{
		temp = temp / 10;
		mod = mod * 10;
	}
	return (mod);
}

void	ft_putnbr(int nbr)
{
	char	c;
	int		mod;	

	if (nbr < 0)
	{
		nbr = -nbr;
		c = '-';
		write(1, &c, 1);
	}
	mod = ft_mod(nbr);
	while (mod != 0)
	{
		c = (char)(nbr / mod) + 48;
		write(1, &c, 1);
		nbr = nbr % mod;
		mod = mod / 10;
	}
}
