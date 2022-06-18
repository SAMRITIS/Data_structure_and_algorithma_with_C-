#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {0,1,1,1,0,0,};
    int i = 0, j = 6;
    while(i<6 && j>0)
    {
        if(arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
        }
        else if(arr[i] == 0)
        {
            i++;
        }
        else if(arr[j] == 1)
        {
            j--;
        }
    }
    for(int k=0;k<6;k++)
    {
        cout<<arr[k]<<" ";
    }
}