#include    <unistd.h>

void    write_digits(char a,char b){
    write(1, &a, 1);
    write(1, &b, 1);
}

void    put_int(int part, int max){

    char part1_1;
    char part2_1;

    if (part<= 9){

        part2_1= part + 48;

        write_digits('0', part2_1);
        
    }
    else if (part <= max){
        
        part1_1=( part / 10) + 48;
        part2_1=( part % 10) + 48;
        write_digits(part1_1, part2_1);

    }
}

void    catint(int first, int second){

    put_int(first,98);
    write(1, " ", 1);
    put_int(second, 99);
    if (first != 98 || second != 99){
        
        write(1, ", ", 2);
    }

}

void    print_combo(void){

    int first;
    int second;

    first= 0;
    while (first <= 98 ){
        
        second= first + 1;
        while (second <= 99){

            catint(first, second);
            second++;

        }
        first++;
    }
}