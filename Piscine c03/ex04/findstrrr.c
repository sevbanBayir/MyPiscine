#include <stdio.h>

char *ft_strstr(char *str, char *to_find){

    unsigned int i;
    i = 0;

    unsigned int i2;
    i2 = 0;

    while (str[i] != '\0')
    {
        while (to_find[i2] != '\0')
        {
            if (to_find[i2] == str[i])
            {
                str[i] = to_find[i2];
            }
            else to_find = 0;
            i2++;
            
        }
        i++;
    }
    return to_find;
    
}

int	main()
{
	char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
	char find[] = "piscine";
	printf("%s", ft_strstr(str, find));
}