#include <stdio.h>

int ft_is_numeric(char *str){

    int i;
    i=0;

    if (str[i] == '\0') return(0);
 
    while (str[i] != '\0')
    {
        if(str[i] >= 49 && str[i] <=57) i++;
        else return(0);
    }
    
    return(1);

}

int main(void){

    char s[] = "sevban";
    char b[] = "865";

    printf("%d \n",ft_is_numeric(s));
    printf("%d",ft_is_numeric(b));

}