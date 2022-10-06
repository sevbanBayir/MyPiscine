#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2){

unsigned int i;
i = 0;

    while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0')) i++;

    return (s1[i] - s2[i]);
    
}

int main(void){

    char *a = "sevban";
    char *b = "sevbhh";

    printf("%d",ft_strcmp(a,b) );

    return 0;
}