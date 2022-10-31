#include<unistd.h>
void    ft_putchar(char a)
{
    write(1, &a, 1);
}

int check_doubles(char *str, char a, int pos)
{
    int i;

    i = 0;
    while (i < pos)
    {
        if (str[i] == a)
            return (0);
        i++;
    }
    return (1);
}

int check_str1_forStr2(char *str, char a)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == a)
            return (0);
        i++;
    }
    return (1);
}

void    ft_union(char *str1, char *str2)
{
    int i;
    
    i = 0;
    while (str1[i])
    {
        if(check_doubles(str1, str1[i], i))
            ft_putchar(str1[i]);
        i++;
    }
    i = 0;
    while (str2[i])
    {
        if(check_str1_forStr2(str1, str2[i]))
        {
            if (check_doubles(str2, str2[i], i))
                ft_putchar(str2[i]);
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    ft_putchar('\n');
    return (0);
}