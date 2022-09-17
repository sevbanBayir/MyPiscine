#include <unistd.h>
#include "ft_alphabet.h"

void ft_putchar(char a){

    write(1, &a, 1);

}

void ft_putAlphabet(void){

    char c;
    c='a';

    while (c<='z'){
        ft_putchar(c);
        c++;
    }

}