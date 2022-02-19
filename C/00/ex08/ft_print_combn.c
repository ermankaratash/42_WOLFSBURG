#include <unistd.h>

#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check_putchar(int x[], int n)
{
	int	i;
	int	yes;

	i = 0;
	yes = 1;
	while (i < n - 1)
	{
		if (!(x[i] < x[i + 1]))
			yes = 0;
		i++;
	}
	if (yes == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(x[i]);
			i++;
		}
		if (x[0] != '9' - n + 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_loop(int x[], int k, int n)
{
	if (k == n - 1)
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			if (n == 9 && x[0] > '1')
				break ;
			ft_check_putchar(x, n);
			x[k]++;
		}
	}
	else
	{
		x[k] = '0';
		while (x[k] <= '9')
		{
			ft_loop(x, k + 1, n);
			x[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	x[10];

	ft_loop(x, 0, n);
}

int	main(void)
{
	int n;

	n = 2;
	while(n <= 5)
	{
		printf("n = %d:\n", n);
		ft_print_combn(n++);
		write(1, "\n", 1);
	}
	n = 9;
	printf("n = %d:\n", n);
	ft_print_combn(n++);
	write(1, "\n", 1);
	return (0);
}
