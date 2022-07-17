#include <iostream>
using namespace std;

int pivot_element(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[0] <= arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return arr[start];
}

int main()
{
    int arr[4] = {6, 7, 8, 1};
    cout << "Pivot Element"
         << " " << pivot_element(arr, 4);
}