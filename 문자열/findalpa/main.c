#include <stdio.h>

int main(void)
{
    char a[101];
    int temp = 0;

    scanf("%s",a);
    for (int i = 'a'; i <= 'z'; i++)
    {
        for (int j = 0; a[j] != '\0'; j++)
        {
            if(a[j] == i)
            {
                temp = j;
                break;
            }
            temp = -1;
        }
        printf("%d ",temp);
    }

}