// Time complexity = O(n)
#include <iostream>
using namespace std;

int search(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;   //key found
        }
    }
    return -1;  //key not found
}

int main()
{
    int arr[] = {20, 4, 5, 22, 55, 66, 78};
    int n = sizeof(arr) / sizeof(int);
    cout << "to serarch 22 : " << search(arr, n, 22);
}