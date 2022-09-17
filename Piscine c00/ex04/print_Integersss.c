#include <unistd.h>

void    ft_putchar(char a){

    write(1, &a, 1);
}

void    ft_put_nmbr(int a){

    /*
    1- -2147....
    2- < 0
    3- > 9
    4- else
    */
if (a == -2147483648)
{
    ft_putchar('-');
    ft_putchar('2');
    ft_put_nmbr(147483648); //else bracket will run here.
}

else if (a < 0)
{
    ft_putchar('-');
    a= -a;
    ft_put_nmbr(a);
}
else if (a > 9)
{
    ft_put_nmbr( a / 10);
    ft_put_nmbr( a % 10);
}
    else
    {
        ft_putchar(a + 48);
    }
}
int main (void)
{
	ft_put_nmbr(-545456);

}
