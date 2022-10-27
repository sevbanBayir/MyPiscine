#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}

char    *ft_strdup(char *src)
{
    char *dup;
    int i;

    i = 0;
    dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
    if(!dup)
        return (0);
    while (src[i] != 0)
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = 0;
    return (dup);
}

int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("original  : base  : $%s$ @ %p\n", str, str);
	allocated = strdup(str);
	printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
}