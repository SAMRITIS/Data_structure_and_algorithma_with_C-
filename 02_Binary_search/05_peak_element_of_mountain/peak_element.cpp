#include <iostream>
using namespace std;

int peak_element(int arr[], int size)
{
    int end = size - 1;
    int start = 0;
    int mid = start + (end - start) / 2;
    while (end > start)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
       
    }
    return arr[mid];
}

int main()
{
    int arr[6] = {1, 2, 4, 5, 1000, 99};
    cout << "Peak Element is"
         << " " << peak_element(arr, 6);
}