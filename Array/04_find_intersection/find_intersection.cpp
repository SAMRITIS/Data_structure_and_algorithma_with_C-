#include<iostream>
using namespace std;

int main()
{
    int arr1[4] = {1,2,3,4};
    int arr2[5] = {3,4,5,6,7};
    int ans[10];
    int i =0, j=0;

    while(i<4 && j<5)
    {
        if(arr1[i] == arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;

        }
        else if(arr1[i] > arr2[j])
        {
           j++;
        }
        else
        {
            i++;
        }
    };
}