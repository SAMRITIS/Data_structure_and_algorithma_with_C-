#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {0, 1, 1, 1, 0, 0};
    int left = 0;
    int right = 6 - 1;
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {

            left++;
        }
        while (arr[right] == 1 && left < right)
        {

            right--;
        }
        if (left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    };
    for (int k = 0; k < 6; k++)
    {
        cout << arr[k] << " ";
    }
}