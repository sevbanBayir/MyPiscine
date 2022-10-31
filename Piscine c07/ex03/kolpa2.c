#include<stdlib.h>
#include<stdio.h>

int size_for_malloc(char **strs, int number_of_strings, char *sep)
{
    int i;
    int j;
    int k;

    k = 0;
    i = 0;
    while (i < number_of_strings)
    {
        j = 0;
        while ( strs[i][j] != 0)
        {
            j++;
            k++;
        }
        i++;
    }
    j = 0;
    while (sep[j] != 0)
        j++;
    k = k + (j * (number_of_strings -1));
    return (k);
}
char    *ft_strjoin(int size, char **strs, char *sep)
{
    char *catted;
    int i;
    int j;
    int k;
    int s;


    j = 0;
    i = 0;
    catted = (char *)malloc((sizeof(char) * size_for_malloc(strs, size, sep)) + 3);
    while (i < size)
    {  
        while (strs[i][k] != 0)
        {
            catted[j] = strs[i][k];
            j++;
            k++;
        }
        s = 0;
        while (sep[s] != 0)
        {
            catted[j] = sep[s];
            j++;
            s++;
        }
        k = 0;
        i++;
    }
    catted[j] = 0;
    return (catted);
}

int main()
{
    char *strs[] = {"sevban", "omer", "zeynep", "dsad"};
    //printf("%d",size_for_malloc(strs, 2));
    //printf("%d", ft_Strlen(strs[0]));
    printf(" \"%s\" ", ft_strjoin(4, strs, " "));
}