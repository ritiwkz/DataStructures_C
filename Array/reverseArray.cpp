/* A Simple C++ Function to reverse the content of an integer Array
 */

#include <bits/stdc++.h>
using namespace std;

// Function to reverse an array using start and end

void reverseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Utility Function to Print an Array

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// main function, The program will start from here.

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int n = sizeof(arr) / sizeof(arr[0]); // figure out the size of array

    // Print the orignal array
    cout << "\nOrignal Array = ";
    printArray(arr, n);
    cout << endl;

    // Function calling
    reverseArray(arr, 0, n - 1);

    // Print the reverse array
    cout << "\nReversed array = ";
    printArray(arr, n);

    return 0;
}