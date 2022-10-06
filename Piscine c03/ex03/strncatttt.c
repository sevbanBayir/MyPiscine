#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb){

    unsigned int i;
    i = 0;

    while(dest[i] != '\0') i++;    
    
    unsigned int i2;
    i2 = 0;
    

    while ((src[i2] != '\0' || dest[i] != '\0') && i2 < nb)
    {
        
        dest[i] = src[i2];
        i++;
        i2++;
    }
    dest[i+1] = '\0';
    return dest;


}

int main(void){

    char a[] = "sevban";
    char *b = "bayir";

    printf("%s", ft_strncat(a,b,3));

    return (0);

}