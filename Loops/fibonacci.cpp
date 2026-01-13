// ForapositiveN,WAPthatprintsthefirstNFibonaccinumbers.

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";

    for(int i = 2; i < num; i++){
        int c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}