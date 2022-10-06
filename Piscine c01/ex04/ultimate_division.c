#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b){

    int first;
    int second;

    first = *a;
    second = *b;

    *a = (first / second);
    *b = (first % second);

    printf("Division: %d \n", *a);
    printf("Mod: %d \n", *b);

}

int main(void){

    int a;
    int b; 

    a=15;
    b=5;
    ft_ultimate_div_mod(&a,&b);
}
