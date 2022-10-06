#include <stdio.h>

int ft_iterative_factorial(int nb){


    if (nb < 0)
    {
        return (0);
    }
    
    int counter;
    int number;
    number = nb;
    counter = 1;

    while (counter < nb)
    {
        number *= counter;
        counter++;
    }
    return (number);
}

int main(void){


    int a;
    a = 5;

    printf("%d", ft_iterative_factorial(a));
    
}