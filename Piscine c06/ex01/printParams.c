#include <unistd.h>
void writer(char a){

    write(1, &a, 1);
}

int main(int argc, char** argv){

    int i;
    int j;
    j = 0;

    while (j < argc)
    {
        i = 0;
        while (argv[j][i] != '\0' && argc)
        {
            writer(argv[j][i]);
            i++;
        }
        writer('\n');
        j++;
    }

    return 0;

}