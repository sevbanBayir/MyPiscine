#include <stdio.h>

int ft_strlen(char *str){

    int counter;
    counter=0;

    while (str[counter] != '\0')
    {
        counter++;
    }

    return counter;
    

}

int main(void)
{

    char *str = "Sevban";

    printf("Lenght of string : %d",ft_strlen(str));
}
