#include<stdio.h>
#include<math.h>

int main()
{
    int a = 100000001, flag = 0;
    if(a % 2 == 0)
        printf("Composite");
    else
    {
        for(int i = 3; i < sqrt(a); i += 2)
        {
            if(a % i == 0)
            {
                printf("Composite ");
                printf("\nFactors are %d and %d", i, (a / i));
                flag = 1;
                //break;
            }

        }
        if(flag == 0)
            printf("\n%d is Prime", a);
        else
            printf("\n%d is Composite", a);

    }
}
