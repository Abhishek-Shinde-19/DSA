// nCr = n!/r!(n-r)!

#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int bioCoe(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int n = 4;
    int r = 2;
    cout<<bioCoe(n,r);
    return 0;
}