#include<stdlib.h>
#include<stdio.h>

int *ft_range(int min, int max)
{
    int *arr;
    int i;

    if (min >= max || !(arr = (int *)malloc ((max - min) * sizeof(int))))
        return (0);
    while (min <= max)
        arr[i++] = min++;
    return (arr);
}

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
    //printf("%p \n", tab);
    //printf("%p \n", (tab = (int *)malloc (size * sizeof(int))));
}
