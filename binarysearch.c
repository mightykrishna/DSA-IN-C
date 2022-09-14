#include <stdio.h>
int search(int arr[], int size, int element)
{
    int mid, high, low;
    low=0;
    high=size-1;
    mid = (low + high) / 2;
    while (low <= high)
    {
    
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] > element)
        {
            high = low - 1;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }
    }
    
    return 0;
}
int main()
{
    int arr[100], size, element, i;
    printf("enter the size of array ");
    scanf("%d", &size);
    printf("enter the element to be searched");
    scanf("%d", &element);
    for (i = 0; i < size; i++)
    {
        printf("enter the elements of array : %d", i + 1);
        scanf("%d",& arr[i]);
    }
    int index=search(arr, size, element);
    printf("the searched element is %d  and its index is %d",element,index);
    return 0;
}