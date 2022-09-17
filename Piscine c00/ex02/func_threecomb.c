#include <unistd.h>

    //print the all possible combinations that constituding from digits of a three digit number

    //  1-three different digits
    //  2-ascending order
    //  3-012 -> 021 -> 201 -> 102 -> 120 -> 210
    //  013 -> 031 -> 301 -> 103 -> 130 -> 310
    //  0-1-2-3-4-5-6-7-8-9
    //  our last number is 789 .
    //  We have ten different digit. They have C(10,3) different combinations this equal to 720 .
    //  This time we'll calculate the permutation and it equals to 120 .
    //  If our pattern is abc, then we use while and increment the digits. if the digits satisfy that they are ordered ascending left to right
    //  our ft_putchar func. will print the number that constitude from these.

void    ft_putchar(char a, char b, char c){
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
	{
		write(1, ", ", 2);
	}
}

void    ft_threecomb(void){
    char a;
    char b;
    char c;

    a='0';

    while (a<='7')
    {
        b=a+1;
        while (b<='8')
        {
            c=b+1;
            while (c<='9')
            {
                ft_putchar(a,b,c);
                c++;
            }   
            b++;
        }   
        a++;
    } 
}

int main(void){

    ft_threecomb();
    return(0);
}