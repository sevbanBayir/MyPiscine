#include <stdio.h>
#include <unistd.h>
void writer(char a){

    write(1, &a, 1);
}

int main(int argc, char** argv){

    int i;
    i = 0;

    while (argv[0][i] != '\0' && argc)
    {
        writer(argv[0][i]);
        i++;
    }

    return 0;

}