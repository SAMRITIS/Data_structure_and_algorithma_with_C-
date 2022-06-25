#include<iostream>
using namespace std;

int unqiue(int arr[], int size)
{
    int x = 0 ;
    for(int i=0; i<size; i++)
    {
       x = x^arr[i];
    }
    return x;
}


int main()
{
    int arr[9] = {1, 2, 3, 4, 1, 2, 3, 4, 6};
    cout<<unqiue(arr, 9);
}