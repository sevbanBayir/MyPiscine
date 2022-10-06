#include <unistd.h>
#include <stdio.h>

int whitespaces(char *str, int *ptr_i){

    int i;
    int count;
    
    i = 0;
    count = 1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
         i++; //İlki boşluk değilse hiçbiri olamaz kurala göre.
    while (str[i] == 43 || str[i] == 45)
    {
        if (str[i] == 45)
            count *= -1;
        i++;       
    }
    *ptr_i = i;
    return (count);

}

int ft_atoi(char *str){
    /*
    1- Tamamına bakılıp sadece sayıdan oluşuyorsa işaret kontrolü yapılması yeterli mi diye karar verilecek.
    1- Eksi işaretlerinin sayısı kontrol edilecek
    2- Boşluklar silinecek
    3- Harf mi sayı mı olduğu kontrol edilip ilk harfte döngü duracak.

   unsigned int i;
   i = 0;

   unsigned int i2;
   i2 = 0;

   unsigned int minusC;
   minusC = 0;

   

   while (str[i] != '\0' && (str[i] == 45 || str[i] == 43 || str[i] == 32 || str[i] >= 48 || str[i] <= 57 ))
   {
    if (str[i] == 45) minusC++;

    if (str[i] >= 48 || str[i] <= 57) silo[i2] = str[i];

   }
   
    if (minusC % 2 != 0 ) silo[0] = '-';

    return (silo);

}

int main(void)
{
	char *s = "   ---+--+01234506789ab567";
    char *silo = " ";
	printf("%s", ft_atoi(s,silo));    */
    int sign;
    int result;
    int i;

    sign = whitespaces(str, &i);
    while (str[i] >= 48 && str[i] <= 57)
    {
        result *= 10;
        result += str[i] - 48;
        i++;
    }
    result *= sign;
    return (result);

}

int main(void)
{
	char *s = "   ---+--+01234506789ab567";
	printf("%d", ft_atoi(s));
}