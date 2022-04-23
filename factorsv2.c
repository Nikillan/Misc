#include<stdio.h>
#include<math.h>

int main()
{
    int a = 100, b = sqrt(a), c, sum = 0;
    int cf = 2, add = 0;
    for(cf; cf <= b; cf++)
    {
        if(a % cf == 0)
        {
            c = a / cf;
            printf("Factor pair: %d %d\n", cf, c);
            if(c != cf)
                add += cf + c;
            if(c == cf)
                add += cf;
            sum ++;
        }
    }
    printf("%d %d", sum, add);
}
