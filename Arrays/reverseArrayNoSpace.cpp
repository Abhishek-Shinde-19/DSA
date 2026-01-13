// Without extra space method Time complexity = O(n), Space complexity = O(1)
// create 2 pointers 1. Start 2. End and swap values
// increment Start decrement End till Start<End

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 9, 3, 7, 2};
    int n = sizeof(arr) / sizeof(int);

    int start = 0, end = n - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}