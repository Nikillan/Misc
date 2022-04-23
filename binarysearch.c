#include<stdio.h>

int bin(int a[], int start_index, int end_index, int element)
{
    while(start_index <= end_index)
    {

        int mid = start_index + (end_index-start_index)/2;
        if(a[mid] == element)
            return mid;
        if(a[mid] > element)
        {
            end_index = mid - 1;
        }
        if(a[mid] < element)
            start_index = mid + 1;
    }
        return - 1;
}
int main()
{
    int size = 10000, j = size;
    int element = 1235, srch;
    int a[size];
    for(int i = 0; i < size; i++)
    {
        a[i] = i;
    }
    srch = bin(a, 0, size - 1, element);
    printf("Element found at %d ", srch);

}
