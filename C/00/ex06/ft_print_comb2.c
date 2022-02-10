#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (i < 100)
    /*max number can be 99*/
	{
		k = i + 1;
		while (k < 100)
		{
			ft_putchar(i / 10 + '0');
            /*look at the ascii table, '0'=48, 48+0=48 then it will write 0, 48+1=49 then it will write 1...*/
			ft_putchar(i % 10 + '0');
			ft_putchar(' ');
			ft_putchar(k / 10 + '0');
			ft_putchar(k % 10 + '0');
			if ((i / 10 != 9) || (i % 10 != 8))
            /*this is the max number of i, when i=98 it is stopped so no need , */
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			k++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
