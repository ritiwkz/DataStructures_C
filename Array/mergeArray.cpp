#include <iostream>
using namespace std;

int main()
{
    // Initializing an array with sorted elements
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};

    // calculating the size of an array
    int size_arr1 = sizeof(arr1) / sizeof(arr1[0]);

    int n = size_arr1; // To be used inorder to merging secound array

    // Initializing another array to be merge to the orignal array
    int arr2[] = {9, 10, 11, 12, 13};

    // Size of arr2 array
    int size_arr2 = sizeof(arr2) / sizeof(arr2[0]);

    // Calculating the size of final-result array
    int size_arr3 = size_arr1 + size_arr2;

    // Initializing result array
    int result[size_arr3];

    // Merging the array
    for (int i = 0; i < size_arr1; i++)
    {
        result[i] = arr1[i];
    }

    for(int i=0;i<size_arr2;i++)
    {
        result[n]= arr2[i];
        n++;
    }

    // Printing the result
    for (int i = 0; i < size_arr3; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}