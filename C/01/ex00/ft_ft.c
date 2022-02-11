#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int number)
/*this function is not needed, we put it here to check our pointer is working or not
also this function explanation is in the 00/ex07 folder*/
{
	int	temp;
	int	size;

	size = 1;
	if (number < 0)
	{
		ft_putchar('-');
		number = -number;
	}
	if (number == -2147483648)
	{
		ft_putchar('2');
		number = 147483648;
	}
	temp = number;
	while ((temp / 10) > 0)
	{
		temp = temp / 10;
		size *= 10;
	}
	temp = number;
	while (size)
	{
		ft_putchar((char)((temp / size)) + 48);
		temp %= size;
		size /= 10;
	}
}

void    ft_ft(int *nbr)
/* this is the pointer variable, defined here and it is used to save adresses
   in this pointer *nbr is the value in nbr adress and nbr is the adress
   here careful: when defining 'int *nbr' means its adress not value
   int *nbr = &i => int *nbr; nbr = &i so both values are adress and no problem*/
{
	*nbr = 42;
}

int     main(void)
{
    int i;

    i=1;
	ft_ft(&i);
    /*&i means its adress in the memory not its value, by doing this 
	we assign the adress of i to pointer nbr*/
    ft_putnbr(i);
    /*we check if 1 really finds 42*/
    return (0);
}
