#include<iostream>
using namespace std;


void swap(int arr[], int size)
{
    for(int i=0; i<size-1; i+=2)
    {
       swap(arr[i], arr[i+1]);

    }
}

void printarray(int arr[], int size)
{
    for(int j=0; j<size; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<'\n';
}

int main()
{
    int even[6] = {1, 23, 56, 4, 6, 9};
    int odd[7] = {1, 23, 56, 4, 6, 9, 11};
    swap(even, 6);
    swap(odd, 7);
    printarray(even, 6);
    printarray(odd, 7);
    return 0;
}