#include <stdio.h>

int max_element_of_array(int arr[], int size)
{
    int element; // initialize a variable to store the element value of the array
    int max_element = arr[0]; // initialize the max_element variable with the value of the first element of the array

    for (int i = 1; i < size; i++) // iterate over the array
    /*
        Above we used 1 instead 0 in i value because we assigned the value of the
        first element of the array to the max_element variable and because of this the 
        time complexity becomes O(n-1) instead of O(n)
    */
    {
        element = arr[i]; // assign the value of the element to the element variable
        if (element > max_element) // check if the current element is more than the max_element we have got till now
        {
            max_element = element; // assign the value of element to the max_element variable
        }
        
    }
    
    return max_element;
    
}

int main()
{
    int arr[] = {2, 3, 2, 7, 4, 2, 7, 2, 49}; // create a sample array
    int size = sizeof(arr) / sizeof(arr[0]); // get the size of the array
    int max_element = max_element_of_array(arr, size); // get the max element of the array
    printf("%d\n", max_element); // show the max element in the console

}

