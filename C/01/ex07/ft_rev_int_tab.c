#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_rev_int_tab(int *tab, int size)
{
   int  temp;
   int  i;
   int  j;

   i = 0;
   j = size;
   
   while(i < size)
   {
       temp = *(tab + i);
       *(tab + i) = *(tab + size - 1);
       *(tab + size - 1) = temp;
       i++;
       size--;
   }
   i=0;
   while (i < j)
   {
       ft_putchar(*(tab + i) + '0');
       i++;
   }
}

int	main(void)
{
    int array[] = {1, 2, 3, 4, 5, 6, 7};

	ft_rev_int_tab(array, 7);

	return (0);
}
