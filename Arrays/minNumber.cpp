#include <iostream>
using namespace std;

int main()
{

    int arr[] = {10, 20, 2, 30, 5, 50, 1, 11};
    int n = sizeof(arr) / sizeof(int);

    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "min number is : " << min << endl;
    return 0;
}