#include<unistd.h>

void    ft_putchar(char a)
{
    write (1, &a, 1);
}

int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

void    lastword(char *str)
{
    int i;

    i = ft_strlen(str) - 1;
    while (str[i] == 32 || str[i] == '\t') // Virgül vs. yi de dahil etmeli miyiz ?
        i--;
    while (i > 0)
    {
        if (str[i] == 32 || str[i] == '\0')
            break;
        i--;
    }
    i++;
    while (str[i] != '\0' && (str[i] != 32 ||str[i] != '\t'))
        ft_putchar(str[i++]);
}

int main(int ac, char **av)
{
	if (ac == 2)
		lastword(av[1]);
	write(1, "\n", 1);
}