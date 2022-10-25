#include<unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != 0)
        i++;
    return (i);
}

void    ft_wdmatch(char *str, char *word)
{
    int wordlen;
    int i;
    int j;
    int found_len;

    i = 0;
    wordlen = ft_strlen(word);
    while (word[i] != 0)
    {
        while (str[j] != 0)
        {
            if (word[i] == str[j])
            {
                found_len++;
                break;
            }    
            
                
        j++;
        }
    i++;
    }
    j = 0;
    if (found_len == wordlen)
    {
        while (word[j] != 0)
        {
            write(1, &word[j], 1);
            j++;
        }
    }
}

int main(int argc, char**argv)
{
    if (argc == 3)
    {
        ft_wdmatch(argv[2], argv[1]);
    }
    write(1, "\n", 1);

    return (0);
}



//"faya" "agvvfdxcacpolhyghbreda"