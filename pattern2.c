#include <stdio.h>

int main()
{
    int i, user;
    int count = 0;
    scanf("%d", &user);
    for(i = 0; i <= user; i++)
    {
        count++;
        if(count % 2 == 0)
        {
            for(int j = count * 5; j > (5 * (count - 1)); j--)
                printf("%d ", j);
        }
        if(count % 2 != 0)
        {
            for(int j = 5 * i + 1; j <= 5 * count; j++)
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
