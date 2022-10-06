#include <stdio.h>

int ft_fibonacci(int index){

    int result;
    int counter;
    int array[10];
    
    counter = 2;
    array[0] = 0;
    array[1] = 1;
    while (index > counter)
        {
        array[counter]=(array[counter-1]+array[counter-2]);
        counter++;
        }
    
    if (index < 0)
        return (-1);
    else if (index < 2)
        return (array[index]);
    else
        return (array[index-1]+array[index-2]);
    
    
}

int main(void){

    printf("%d", ft_fibonacci(8));

}