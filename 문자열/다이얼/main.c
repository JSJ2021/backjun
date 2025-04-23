#include <stdio.h>

int main(void)
{
    char c[15];
    int i;
    int cnt = 0;

    i = 0;
    scanf("%s", c);
    while(i < 15)
    {
        if (*(c + i) >= 'A' && *(c + i) <= 'C')
        {
            cnt += 3;
        }
        else if (*(c + i) >= 'D' && *(c + i) <= 'F')
        {
            cnt += 4;
        }
        else if (*(c + i) >= 'G' && *(c + i) <= 'I')
        {
            cnt += 5;
        }
        else if (*(c + i) >= 'J' && *(c + i) <= 'L')
        {
            cnt += 6;
        }
        else if (*(c + i) >= 'M' && *(c + i) <= 'O')
        {
            cnt += 7;
        }
        else if (*(c + i) >= 'P' && *(c + i) <= 'S')
        {
            cnt += 8;
        }
        else if (*(c + i) >= 'T' && *(c + i) <= 'V')
        {
            cnt += 9;
        }
        else if (*(c + i) >= 'W' && *(c + i) <= 'Z')
        {
            cnt += 10;
        }
        i++;
    }
    printf("%d",cnt);
}