#include <stdio.h>
int ft_is_prime(int nb){

    long nmb;
    nmb = nb;
    int counter;
    counter = 2;
    //Tüm asallar tek. 2hariç
    if (nb == 2)
        return (1);
    else if (nb < 2)
        return (0);    
    else if(nb % 2 == 0)
        return (0);
    else
    {
        while (counter < nmb)
        {
            if(nmb % counter == 0) return (0);
            counter ++;
        }    
    }
    return (1);
}

int main (void)
{
	printf("%d -> %d\n", -3965, ft_is_prime(-3965));
	printf("%d -> %d\n", -12, ft_is_prime(-12));
	printf("%d -> %d\n", 0, ft_is_prime(0));
	printf("%d -> %d\n", 1, ft_is_prime(1));
	printf("%d -> %d\n", 2, ft_is_prime(2));
	printf("%d -> %d\n", 4219, ft_is_prime(4219));
	printf("%d -> %d\n", 7853, ft_is_prime(7853));
	printf("%d -> %d\n", 78989, ft_is_prime(78989));
	printf("%d -> %d\n", 2147483647, ft_is_prime(2147483647));
	
}