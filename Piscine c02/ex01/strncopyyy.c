#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){

    int i;
    i=0;

    while (i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';

}

int main(void){

    char src[] = "Sevban";
    char dest[] = "Bayir";

    ft_strncpy(dest, src, 4);

    printf("%s", dest);

    
}
