#include<stdio.h>

int main()
{
    int five = 5;
    int three = 0;
    int a = 100;
    for(int i = 0; i < a; i++)
    {
        if(three > 100 || five >100)
            break;

        if(three == five)
        {
            printf("%d ", five);
            three += 3;
            five += 5;

        }
        if(three <= five)
        {
            printf("%d ", three);
            three += 3;

        }
        else if(five < three)
        {
            printf("%d ", five);
            five += 5;
        }
    }
}
