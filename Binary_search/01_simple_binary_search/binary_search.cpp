#include <iostream>
using namespace std;

int main()
{
    int search = 3;
    int arr[5] = {3, 5, 9, 13, 27};
    int start = 0;
    int last = 5 - 1;
    int mid = start + (last - start) / 2; // For Get Rid of Integer Range 2^31-1
    // In Case of (start+end)/2 it can go beyond range of integer 2^31-1
    while (last >= start)
    {

        if (arr[mid] == search)
        {
            cout << "Element Found On Index Number"
                 << " " << mid;
            return mid;
        }
        else if (arr[mid] > search)
        {
            last = mid - 1;
            mid = (start + last) / 2;
        }
        else if (arr[mid] < search)
        {
            start = mid + 1;
            int mid = start + (last - start) / 2;
        }
        else
        {
            cout << "Element Not Found";
            return -1;
        }
    }
}