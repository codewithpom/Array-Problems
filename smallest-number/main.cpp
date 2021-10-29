#include <iostream>

// create a function to get the smallest number in array
int getSmallest(int arr[], int n)
{
    // initialize the smallest number
    int smallest = arr[0];
    // loop through the array
    for (int i = 1; i < n; i++)
    {
        // if the current element is smaller than the smallest number
        if (arr[i] < smallest)
        {
            // update the smallest number
            smallest = arr[i];
        }
    }
    // return the smallest number
    return smallest;
}

// test the function
int main()
{
    // create an array
    int arr[] = {12, 34, 54, 2, 3};
    // get the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);
    // print the smallest number
    std::cout << "The smallest number is " << getSmallest(arr, n);
    return 0;
}
