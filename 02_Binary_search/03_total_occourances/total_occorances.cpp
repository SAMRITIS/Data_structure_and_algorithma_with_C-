#include <iostream>
using namespace std;

int left_occourances(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int s = 0;
    while (end >= start)
    {
        if (arr[mid] == key)
        {
            s = mid;
            end = mid - 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return s;
}

int right_occourances(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int s = 0;
    while (end >= start)
    {
        if (arr[mid] == key)
        {
            s = mid;
            start = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return s;
}

int main()
{
    int arr[6] = {1, 2, 3, 3, 3, 4};
    cout << left_occourances(arr, 6, 3) - right_occourances(arr, 6, 3) + 1;
}