#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    bool isPrime = true;

    cout << "Enter a Number ";
    cin >> num;

    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout << "The number is Prime " << endl;
    }else{
        cout << "The number is not Prime " << endl;
    }

    return 0;
}