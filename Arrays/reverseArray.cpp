// simple method Time complexity = O(n), Space complexity = O(n)
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 9, 3, 7, 2};
    int n = sizeof(arr) / sizeof(int);
    int temp[n];

    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        temp[i] = arr[j];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}