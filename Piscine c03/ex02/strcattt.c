#include <stdio.h>

char *strconcattt(char *destination, char *source){

    unsigned int i;
    i = 0;

    while(destination[i] != '\0') i++;    
    
    unsigned int i2;
    i2 = 0;
    destination[i] = 32;

    while (source[i2] != '\0' || destination[i] != '\0')
    {
        
        destination[i+1] = source[i2];
        i++;
        i2++;
    }
    
    return destination;

}

int main(void){

    char a[] = "sdggwqrgqwegwqe";
    char *b = "miyagi-Do";

    printf("%s", strconcattt(a,b));

    return (0);

}