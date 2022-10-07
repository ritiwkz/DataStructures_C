/*
 Algorithm for sorting an unsorted array (Selection Sort)

 Lets consider the following array as an example: arr[] = {64, 25, 12, 22, 11}

First pass:

For the first position in the sorted array, the whole array is traversed from index 0 to 4 sequentially. The first position where 64 is stored presently, after traversing whole array it is clear that 11 is the lowest value.
   64   	   25   	   12   	   22   	   11
Thus, replace 64 with 11. After one iteration 11, which happens to be the least value in the array, tends to appear in the first position of the sorted list.
   11   	   25   	   12   	   22   	   64
Second Pass:

For the second position, where 25 is present, again traverse the rest of the array in a sequential manner.
   11   	   25   	   12   	   22   	   64
After traversing, we found that 12 is the second lowest value in the array and it should appear at the second place in the array, thus swap these values.
   11   	   12   	   25   	   22   	   64
Third Pass:

Now, for third place, where 25 is present again traverse the rest of the array and find the third least value present in the array.
   11   	   12   	   25   	   22   	   64
While traversing, 22 came out to be the third least value and it should appear at the third place in the array, thus swap 22 with element present at third position.
   11   	   12   	   22   	   25   	   64
Fourth pass:

Similarly, for fourth position traverse the rest of the array and find the fourth least element in the array
As 25 is the 4th lowest value hence, it will place at the fourth position.
   11   	   12   	   22   	   25   	   64
Fifth Pass:

At last the largest value present in the array automatically get placed at the last position in the array
The resulted array is the sorted array.
   11   	   12   	   22   	   25   	   64
*/

/* Psudo Code

Follow the below steps to solve the problem:

# Initialize minimum value(min_idx) to location 0.
# Traverse the array to find the minimum element in the array.
# While traversing if any element smaller than min_idx is found then swap both the values.
# Then, increment min_idx to point to the next element.
# Repeat until the array is sorted.

*/

#include <iostream>
using namespace std;

// swap function
void swap(int *xp, int *yp)
{
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n-1; i++)
    {
       
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}

// Function to print an array

void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   {
      cout << arr[i] << " ";
   }
   cout << endl;
}

// Drive Problem

int main()
{
   int arr[] = {76, 8, 90, 74, 10, 12, 78};
   int n = sizeof(arr) / sizeof(arr[0]);
   selectionSort(arr, n);
   cout << "\nSorted array: ";
   printArray(arr, n);
   return 0;
}