void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < size - 1)
	{
		while (i < size - 1)
		{
			if (*(tab + i) > *(tab + i + 1))
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
}
