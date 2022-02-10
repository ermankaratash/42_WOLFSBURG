#include <unistd.h> 
/*write function is in this library*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
	/*1 for standart output to be printed, can be also a file where printed*/
	/*& for addressing to variable and c is variable*/
	/*1 for how many bytes*/
}

int	main(void)
{
	ft_putchar('a');
	return (0);
}
