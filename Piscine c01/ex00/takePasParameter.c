#include <unistd.h>
#include <stdio.h>

void    ft_put_pointer(int *nmr){

    *nmr=42;

}

int main(void){

    int nmbr;

    ft_put_pointer(&nmbr);
    printf("%d", nmbr);

    return(0);

}