//This is the last project of c00. (ex08)
#include <unistd.h>
#include <stdbool.h>


void ft_putchar(char a){

    write(1, &a, 1);
    
}

void actual_print(int *table, int n){

    int i;
    bool    low;

    i=1;
    low=1;

    while (i < n)
    {
         if (table[i-1] >= table[i]){

            low= 0;
        
         }
         i++;
    
    }
    
    if (low)
    {
        
        i=0;
        while (i < n) 
            ft_putchar(table[i++] + 48);

        if (table[0] < (10-n))
        {
            ft_putchar(',');
            ft_putchar(' ');
        }
                
    }
    
}

void    create_numbers(int n){

    int i;
    int table[n];

    i= 0;

    while (i < n) 
        table[i++] = 0;
    
    while (n >= 1 && table[0] < (10-n) && n < 10)
    {
        actual_print(table, n);
        table[n-1]++;
        i= n-1;
        while (i && n > 1)
        {
            if (table[i] > 9)
            {
                table[i - 1]++;
                table[i] = 0;
            }
            i--;
            
        }
        
    }
    
}

int main(void){

    create_numbers(3);
    return(0);
}