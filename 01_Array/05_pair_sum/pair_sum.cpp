// Find All Pair Whoose Sum is 6

#include<iostream>
using namespace std;

int main()
{
    int arr[6] = {2, 3, 4, 5, 1, 6};
    for(int i=0; i<6; i++)
    {
       for(int j = i;j<6;j++)
       {
         if(arr[i]+arr[j] == 6)
         {
            cout<<arr[i]<<" "<<arr[j]<<"\n";
         }
       }
    }
}