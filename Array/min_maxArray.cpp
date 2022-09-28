// C++ program to find the min and max element
// of Array using sort() in STL
 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Get the array
    int arr[] = {12,3,23,1,24,57,77,3,4};

    // Compute the size of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    // Print the orignal Array
    cout<<"Entered Array = ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Minimum Element = "<< *min_element(arr,arr+n)<<endl;

    cout<<"Maximum Element = "<< *max_element(arr, arr+n)<<endl;

    return 0;

}