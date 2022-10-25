#include<stdlib.h>
#include<stdio.h>

int actual_size(int a)
{
    if (a < 0)
        return (-a);
    return (a);
}

int *ft_range(int start, int end)
{
    int size;
    int *array;
    int *d;
    int i;

    size = actual_size(end - start) + 1;
    d = (array = malloc(size * sizeof(int)));
    array = malloc(size * sizeof(int));
    //if (!d)
    //    return (0);
    i = 0;
    if (size == 1)
        array[0] = start;
    
    if (start > end)
    {
        while (i < size)
        {
            array[i] = start - i;
            i++;
        }
    }
    else if (start < end)
    {
        while (i < size)
        {
            array[i] = start + i;
            i++;
        }
    }
    //printf("%p", d);
    return (array);
}

int        main(void)
{
    int *tab;
    int i = 0;
    int start = -3;
    int end = -12 ;
    int size = actual_size(end - start) + 1;
    
    tab = ft_range(start, end);
    while(i < size)
    {
    printf("%i, ", tab[i]);
    i++;
    }
}
