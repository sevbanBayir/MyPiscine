#include <stdio.h>

int ft_recursive_factorial(int nb){
    if(nb == 0)
        return 1;
    else if (nb < 0)
        return 0;
    else
        return (ft_recursive_factorial(nb-1)*nb);
}

int main(void){


    int a;
    a = 5;

    printf("%d", ft_recursive_factorial(a));
    
}