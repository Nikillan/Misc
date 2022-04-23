#include<stdio.h>
#include<math.h>
int arm(int a)
{
    static int b =0, c = 0;
    int temp=a;
    if(temp > 0)
    {
        b = temp%10;
        c = (b*b*b) + c;
        temp = temp / 10;
        return arm(temp);
    }
    else
        return c;                                                                                                                                                                                                                                                                ;
}
int main()
{
    int a, b;
    scanf("%d",&a);
    b = arm(a);
    if (a == b)
        printf("Armstrong");
    else
        printf("Not an armstrong");

}
