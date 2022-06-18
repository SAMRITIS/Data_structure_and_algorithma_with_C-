#include<iostream>
using namespace std;


void findduplicates(int arr[], int size)
{
    int x = 0;
    for(int i=0; i<size; i++ )
    {
       x = x^arr[i];
    }

    for(int i=0;i<size;i++)
    {
        x = x^i;
    }
    cout<<x;
}



int main()
{
    int arr[7] = {1,2,3,4,5,6,6};
    findduplicates(arr, 7);
}