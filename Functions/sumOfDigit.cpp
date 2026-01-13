#include<iostream>
using namespace std;

int sumOfDigit(int n){
    int temp = n;
    int sum=0;
    while(temp>0){
        sum += temp%10;
        temp /= 10;
    }
    return sum;
}

int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"The sum mof digits is : "<<sumOfDigit(n);
    return 0;
}