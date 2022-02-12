#include <unistd.h>

void	ft_putstr(char *str)
{	
	int		i;

	i = 0;
	while (str[i] != '\0')
    /*arrays last value is \0, so loop endet when its come last value*/
	{	
		write(1, (str + i), 1);
        /*we will write here our arrays' values. 
        we use pointer arithmetic, because str is a pointer and it works like:
        str=&str[0] => H; str + 1 = &str[1] => e ... 
        this arithmetic means when +1 adress goes next adress and in arrays it is [1]' adress*/
		i++;
	}
}

int main(void)
{
    char    str[] = {"Hello"};
    /*we define an array and its values in the memory are=> H,e,l,l,o,\0*/

    ft_putstr(str);
    /*in arrays it means its adress, because arrays' values are in memory.
    so str=&str[0]*/
    return (0);
}