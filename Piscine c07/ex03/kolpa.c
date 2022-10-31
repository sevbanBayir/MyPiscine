#include<stdlib.h>
#include<stdio.h>

int size_for_malloc(char **strs, int number_of_strings)
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
    return (k);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char *catted;
    int i;
    int j;
    int k;

    j = 0;
    i = 1;
    catted = (char *)malloc(sizeof(char) * size_for_malloc(strs, size));
    while (i < size)
    {   
       
        if (strs[i] == sep)
        {
            k = 0;
            while (strs[i - 1][k] != 0)
            {
                catted[j] = strs[i - 1][k];
                j++;
                k++;
            }
            k = 0;
            while (strs[i + 1][k] != 0)
            {
                catted[j] = strs[i + 1][k];
                j++;
                k++;
            }
        }
        i++;
    }
    catted[j] = 0;
    return (catted);
}

int main()
{
    char *strs[] = {"sevban", "bay", "omer", "bay", "zeynep"};
    //printf("%d",size_for_malloc(strs, 2));
    //printf("%d", ft_Strlen(strs[0]));
    printf("%s", ft_strjoin(5, strs, "bay"));
}