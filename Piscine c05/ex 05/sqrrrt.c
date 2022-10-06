#include <stdio.h>
int ft_sqrt(int nb){

    long number;
    long index;

    number = nb;
    index = 2;

    if (number < 0)
        return (0);
    else if (number == 1)
        return (1);
    else
    {
        while (index * index <= number)
        {
            if(index * index == number) return index;
            index++;
        }
    }
    return (0);
}

int    main(void)
{
	printf("sqrt of %d is %d\n", -2282, ft_sqrt(-2282));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 25, ft_sqrt(25));
	printf("sqrt of %d is %d\n", 390625, ft_sqrt(390625));

        return (0);
}