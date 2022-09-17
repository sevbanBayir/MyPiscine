#include <stdio.h>

void    ft_swap(int *a, int *b){

    int c;
     c = *a;
    *a = *b;
    *b =  c;


}

int main(void) {

    int a = 21;
    int b= 42;

    ft_swap(&a, &b);

    printf("a variable = %d \n" , a);
    printf("b variable = %d", b);

}