// Reverse The Given Array of Numbers

#include <iostream>

using namespace std;

void reverseArry(int arr[], int start, int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[10], n, i;
    cout<<"size of array"<<endl;
    cin>>n;
    cout<<"Enter Array Elements"<<endl;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    reverseArry(arr, 0, n-1);
    cout<<"Reverse Of Array: "<<endl;
    printArray(arr, n);
    return 0;
}
