#include <stdio.h>

// create a function that takes a array and gives the smallest number
int smallest(int array[], int size)
{
    int smallest = array[0];
    for (int i = 0; i < size; i++)
    {
        if (array[i] < smallest)
        {
            smallest = array[i];
        }
    }
    return smallest;
}

// test the function
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);
    printf("The smallest number is %d", smallest(array, size));
    return 0;
}
