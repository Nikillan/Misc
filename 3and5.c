#include<stdio.h>

int main()
{
    int a = 100, j = 0, i = 0;
    while(j < a)
    {
        if(i % 7 == 0)
        {
            j = j + 3;
            printf("%d ", j);
        }
        if(i % 7 == 1)
        {
            j = j + 2;
            printf("%d ", j);
        }
        if(i % 7 == 2)
        {
            j = j + 1;
            printf("%d ", j);
        }
        if(i % 7 == 3)
        {
            j = j + 3;
            printf("%d ", j);
        }
        if(i % 7 == 4)
        {
            j = j + 1;
            printf("%d ", j);
        }
        if(i % 7 == 5)
        {
            j = j + 2;
            printf("%d ", j);
        }
        if(i % 7 == 6)
        {
            j = j + 3;
            printf("%d ", j);
        }
        i++;
    }
printf("%d ", j);
}
