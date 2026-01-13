#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n==1){
        return false;
    }
    
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<isPrime(2)<<endl;
    cout<<isPrime(3)<<endl;
    cout<<isPrime(4)<<endl;
    cout<<isPrime(5)<<endl;
}