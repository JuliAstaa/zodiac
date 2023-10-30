#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int validateInt()
{
    char ch;
    char *data;
    data = (char *)malloc(sizeof(char));
    int index = 0;

    while ((ch = _getch()) != 13)
    {
        if (ch >= '0' && ch <= '9')
        {
            printf("%c", ch);
            data[index] = ch;
            index++;
        }
    }

    data[index] = '\0';
    return atoi(data);
}

int main()
{
    int day, month;

    printf("\nMasukkan hari: ");
    day = validateInt();
    printf("\nMasukkan bulan: ");
    month = validateInt();

    if (day > 31 || month > 12)
    {
        printf("\nTolong masukkan tanggal atau bulan yang sesuai");
    }
    else
    {

        if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
        {
            printf("\nZodiak anda adalah Aries");
        }
        else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
        {
            printf("\nZodiak anda adalah Taurus");
        }
        else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
        {
            printf("\nZodiak anda adalah Gemini");
        }
        else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
        {
            printf("\nZodiak anda adalah Cancer");
        }
        else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
        {
            printf("\nZodiak anda adalah Leo");
        }
        else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
        {
            printf("\nZodiak anda adalah Virgo");
        }
        else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
        {
            printf("\nZodiak anda adalah Libra");
        }
        else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
        {
            printf("\nZodiak anda adalah Scorpio");
        }
        else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
        {
            printf("\nZodiak anda adalah Sagitarius");
        }
        else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
        {
            printf("\nZodiak anda adalah Capriorn");
        }
        else if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
        {
            printf("\nZodiak anda adalah Aquarius");
        }
        else if ((month == 2 && day >= 19) || (month == 3 && day <= 20))
        {
            printf("\nZodiak anda adalah Pisces");
        }
    }
}