// binary search

#include <iostream>
using namespace std;

int binSearch(int *arr, int n, int key)
{
    int st = 0, ed = n - 1;
    while (st <= ed)
    {
        int mid = (st + ed) / 2;
        if (arr[mid] == key)        //key found at mid
        {
            return mid;
        }
        else if (arr[mid] < key)    //second half
        {
            st = mid + 1;
        }
        else                        //first half
        {
            ed = mid - 1;
        }
    }
    return -1;  //key not found
}

int main()
{
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int n = sizeof(arr) / sizeof(int);

    cout << binSearch(arr,n,10);
}