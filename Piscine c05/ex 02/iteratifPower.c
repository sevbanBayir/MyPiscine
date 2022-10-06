#include <stdio.h>

int ft_iterative_power(int nb, int power){

    int counter;
    int nmb;
    nmb = nb;
    counter = 1;

    while (counter < power)
    {
        nmb *= nb;
        counter++;
    }
    
    return (nmb);
}

int main(void){


    int a;
    a = 2;

    printf("%d", ft_iterative_power(5,3));


}