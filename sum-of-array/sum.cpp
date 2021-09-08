#include <iostream>

using namespace std;

int sum_of_array(int arr[], int length){
    int sum = 0; // initialize a variable to return at last
    for (int i = 0; i < length; i++) // iterate over the array
    {
        sum += arr[i]; // add the number to the sum
    }
    
    return sum; // return the sum
}

int main()
{
    int arr[] = {4, 2, 54, 3, 5}; // create a sample array
    int size = sizeof(arr) / sizeof(arr[0]); // create a variable size to store the size of the array
    int sum = sum_of_array(arr, size); // call the function and store the output
    cout << sum << endl; // show the ouput in console by cout function

}

