#include<stdlib.h>
#include<stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int *arr;
    int i;
    int size;

    size = max - min;
    i = 0;
    if (min >= max)
    {
        *range = 0;
        return (0);
    }
    if (!(arr = (int  *)malloc(sizeof(int) * size)))
        return (-1);
    while (min < max)
        arr[i++] = min++;
    *range = arr; 
    return (size);
}

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}