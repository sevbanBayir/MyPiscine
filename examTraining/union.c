#include<unistd.h>

void    ft_putchar(char a)
{
    write(1, &a, 1);
}

int ft_check_double2(char *str, char a)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == a)
            return (0);
        i++;
    }
    return (1);
}

int ft_check_double(char *str, char a, int pos)
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

void    ft_union(char *str1, char *str2)
{
    int i;

    i = 0;
    while (str1[i] != '\0')
    {
        if (ft_check_double(str1, str1[i], i))
            ft_putchar(str1[i]);
        i++;
    }
    i = 0;
    while (str2[i] != '\0')
    {
        /*
        -Hem kendisini hem str1'i kontrol etmemiz gerekiyor.
        -str2'deki karakter str1'de varsa str2'nin kendisine bakmamıza gerek yok bu yüzden önce str1'in tamamıyla o anki str2 karakterini
        karşılaştırıyoruz
        */
        if (ft_check_double2(str1, str2[i]))
        {
            if (ft_check_double(str2, str2[i], i))
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