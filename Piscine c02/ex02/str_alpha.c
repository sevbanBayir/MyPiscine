#include <stdio.h>

int ft_str_is_alpha(char *str){

    int i;
    i=0;

    if (str[i] == '\0') return(1);

    while (str[i]!= '\0')
    {
        if((str[i] >= 65 && str[i] <=90) || (str[i] >= 97 && str[i] <= 122)) i++;
        else return(0);
    }
    
    return(1);

}

int main(void){

    char s[] = "sevban";
    char b[] = "asd865";

    printf("%d \n",ft_str_is_alpha(s) );
    printf("%d",ft_str_is_alpha(b) );

}