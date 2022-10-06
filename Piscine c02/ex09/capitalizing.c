
char make_lowerCase(char *str){
    int i;
    i=0;

while (str[i] != '\0')
{
    if ((str[i] >= 'A' && str[i] <= 'Z'))
    {
        str[i] -= 32;
    }
    i++; 
}

return(str);
    
}

char *ft_strcapitalize(char *str){
    int i;
    i=0;

    int controller;
    controller = 1;

    make_lowerCase(str);

    while (str[i] != '\0')
    {

        if (str[i] >= 'a' && str[i] <= 'z') {

            if(controller== 1) {
                str[i] -=32;
                controller = 0;
            }
        } 
        else if ( str[i] >= '0' && str[i] <= '9' ) controller = 0;

        else controller = 1;
                                                                                                                    
        i++;
    }
}

// Sayı değilse i1= 1
// Boşluksa i1= 1
// Özel karakterse i1= 1
// harfse ve i1=1 ise büyüt. -> 