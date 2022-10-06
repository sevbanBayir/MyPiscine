#include <unistd.h>
#include <stdio.h>

void put_char(char a){
    write(1, &a, 1);    
}

void *ft_print_memory(void *addr, unsigned int size){

    /*
    Columns:
    The hexadecimal address of the first line’s first character followed by a ’:’
    The content in hexadecimal with a space each 2 characters and should be
padded with spaces if needed (see the example below).
    The content in printable characters.

    Check:
    1-If a character is non-printable, it’ll be replaced by a dot.
    2-Each line should handle sixteen characters.
    3-If size equals to 0, nothing should be displayed.
    
    */


}

void *putttmem(void *addr){

 return (void *)addr;

}


int main(void){

    char a[] = "sevban";
    char *pA = a;

    int b = 32;
    int *pB= &b;

    float f = 2.4;
    float *pF = &f;

    double d = 4.4;
    double *pD = &d;



    
    printf("The address of the first element of this array is: %p \n", a);
    printf("The first character of the string which in this pointer(%p) is: %c \n", pA, *a);
    printf("The string which in this pointer(%p) is: %s \n\n\n", pA, a);


    printf("The address of the int is: %p \n", pB);
    printf("The value in this pointer (%p) is: %d \n\n\n", pB, *pB);

    printf("The address of the float is: %p \n", pF);
    printf("The value in this pointer (%p) is: %f \n\n\n", pF, *pF);

    printf("The address of the double is: %p \n", pD);
    printf("The value in this pointer (%p) is: %lf \n\n\n", pD, *pD);

}