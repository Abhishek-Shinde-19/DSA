// Brute force approach(slightly optimized) O(n^2)

#include<iostream>
using namespace std;

void maxSubarraySum(int *arr, int n){
    int maxSum = INT8_MIN;
    for(int i = 0; i<n; i++){
        int sum=0;
        for(int j=i; j<n; j++){
                sum+=arr[j];
            maxSum=max(maxSum,sum);
        }
    }

    cout << "Max sum of Subarray is : "<<maxSum;
}

int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = sizeof(arr) / sizeof(int);
    maxSubarraySum(arr,n);
    return 0;
}