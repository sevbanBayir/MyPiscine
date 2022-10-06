#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n){

int i;
i=0;

while ((s1[i] != '\0' || s2[i] != '\0') && i <= n)
{
    if (s1[i] == s2[i]){

        i++;
        
    }

}

if (s1[i] == s2[i])return (0);

else if(s1[i] < s2[i]) return (-1);

else return (1);
    
}

int main(void){

    char *a = "abcdf";
    char *b = "abcdf";

    

    printf("%d",ft_strncmp(a,b,4) );

    return 0;
}