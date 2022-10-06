#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

int ft_nextPrime(int nb){

	int counter;
	counter = nb;
	if(ft_is_prime(nb)) return (nb);
	if(nb % 2 == 0) counter++;
	while (!(ft_is_prime(counter)))
	{
		counter +=2;
	}
	return (counter);
	
}