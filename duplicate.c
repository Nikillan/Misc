#include<stdio.h>
int main()
{
    int arr[]={2,3,4,3,2,3};
    int temp[100] = {0};    /*for(int i=0;i<6;i++)
    {
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]==arr[j])
                printf("%d ",arr[i]);
        }
    }*/

    for(int i = 0; i < 6; i++)
    {
        temp[ arr[i] ]++;
       // printf("%d ", temp[arr[i]]);
    }

    for(int i=0;i<100;i++)
    {
        if(temp[i]>=2)
            printf("%d ",i);
    }

    return 0;
}
