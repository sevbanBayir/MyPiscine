#include <stdio.h>

char*	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}


int main(void){

    char source[] = "SEVBAN";

    char dest[]= "aa";

	ft_strcpy(dest, source);

	printf("%s", dest);

	//ft_strcpy(dest, myString);
    
    //printf("%c", *(myString+3));
    
    return(0);

}