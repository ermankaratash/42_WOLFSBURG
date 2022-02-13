#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_sort_int_tab(int *tab, int size)
{
   int  temp;
   int  i;
   int  j;

   i = 0;
   j = 0;
   
   while (j < size - 1)
   {
       while(i < size - 1)
       {
           if (*(tab + i) > *(tab + i+1))
           {
               temp = *(tab + i);
               *(tab + i) = *(tab + i + 1);
               *(tab + i + 1) = temp;
            }
           i++;
        }
        i = 0;
        j++;
    }
   
   i=0;
   while (i < size)
   {
       ft_putchar(*(tab + i) + '0');
       i++;
   }
}

int	main(void)
{
    int array[] = {7, 2, 5, 1, 4, 6, 3};

	ft_sort_int_tab(array, 7);

	return (0);
}
