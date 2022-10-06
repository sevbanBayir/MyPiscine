#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size){

    int counter;
    counter=0;
    int counter2;
    counter2= size - 1;
    int temp;
    int counter3;
    counter3 = 0;

    if (size % 2 == 0)
    {
            while (counter != counter2-1)
    {
        
        temp = tab[counter];
        tab[counter] = tab[counter2];
        tab[counter2] = temp;
        
        counter++;
        counter2--;

    }

    while (counter3< size)
    {

        printf("%d", tab[counter3]);
        counter3++;
    }
    }
    
else {
    
    while (counter != counter2)
    {
        
        temp = tab[counter];
        tab[counter] = tab[counter2];
        tab[counter2] = temp;
        
        counter++;
        counter2--;

    }

    while (counter3< size)
    {

        printf("%d", tab[counter3]);
        counter3++;
    }
}

    
}

int main(void){

    int table[8] = {1,2,3,4,5,6,7,8};

    ft_rev_int_tab(table,8);
    
}