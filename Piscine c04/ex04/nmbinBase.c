#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int strlength(char *base)
{
    int i;    
    i = 0;
    while(base[i] != '\0') i++;
    return (i);
}

int checkError(char *str){

    int i;
    int j;
    int x;

    x = strlength(str);
    i = 0;

    if (str[0] == '\0' || x == 1)
        return (0);
    while (str[i] != '\0')
    {
        if(str[i] == 43 || str[i] == 45 || str[i] <= 32 ||str[i] == 127)
            return (0);
        j = i + 1;
        while (j < x)
        {
            if (str[i] == str[j])
                return (0);
            j++;
        }
        i++;
    }
    return(1);
}

void	ft_putnbr_base(int nbr, char *base){

    int error;
    int x;
    long nb;

    error = checkError(base);
    x = strlength(base);
    nb = nbr;

    if (error == 1)
    {
        if (nb < 0)
        {
            ft_putchar('-');
            nb *= -1;
        }
        if (nb < x)
        {
            ft_putchar(base[nb]);
        }
        if (nb >= x)
        {
            ft_putnbr_base(nb / x, base);
            ft_putnbr_base(nb % x, base);
        }
        
    }

}

int		main(void)
{
	ft_putnbr_base(-12, "01");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	printf("\n");
	ft_putnbr_base(894867, "0123456789");
	printf("\n");
	ft_putnbr_base(53, "0123456789abcdef");
}