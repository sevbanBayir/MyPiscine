#include <unistd.h>
#include "reverse_Alphabet.h"

void    new_putchar(char a){

    write(1, &a, 1);
}

void    reverse_alphabet(void){

    char alphabet;
    alphabet='z';

    while (alphabet >= 'a'){
        
        new_putchar(alphabet);
        alphabet--;

    }
    
}