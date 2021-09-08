#include <stdio.h>

int sum_of_array(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    
    return sum;

}

int main()
{
    int arr[] = {3, 4, 2, 5, 3, 6, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = sum_of_array(arr, size);
    printf("%d\n", sum);

}

